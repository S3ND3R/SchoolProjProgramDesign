// Copyright (c) 2018, Warren Weber, University of Minnesota.

#include <iostream>
#include <string>
#include "gtest/gtest.h"
#include "imagetools/image_editor.h"
#include "imagetools/pixel_buffer.h"
#include "imagetools/color_data.h"


using image_tools::FilterThreshold;
using image_tools::ImageEditor;
using image_tools::PixelBuffer;

class FilterThresholdRegressionTest : public ::testing::Test {
  void SetUp() override {
    cutoff_value_ = 0.4;
  }

 protected:
  std::string test_file = "./resources/test_in.png";
  std::string expect_file = "./resources/threshold_0.4_expected.png";
  std::string generated_file = "./resources/threshold_0.4_generated.png";
  ImageEditor image_editor_;
  float cutoff_value_;
};

TEST_F(FilterThresholdRegressionTest, ImageRegressionEquality) {
  PixelBuffer *test_buffer_ = new PixelBuffer(test_file);
  PixelBuffer *expected_buffer_ = new PixelBuffer(expect_file);
  image_editor_.set_pixel_buffer(test_buffer_);
  image_editor_.ApplyThresholdFilter(cutoff_value_);
  image_editor_.SaveToFile(generated_file);
  image_editor_.LoadFromFile(generated_file);
  EXPECT_TRUE(*expected_buffer_ == *test_buffer_);
}
