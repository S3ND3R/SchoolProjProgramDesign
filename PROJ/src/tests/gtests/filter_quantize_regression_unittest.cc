// Copyright (c) 2018, Warren Weber, University of Minnesota.

#include <iostream>
#include <string>
#include "gtest/gtest.h"
#include "imagetools/image_editor.h"
#include "imagetools/pixel_buffer.h"
#include "imagetools/color_data.h"


using image_tools::FilterQuantize;
using image_tools::ImageEditor;
using image_tools::PixelBuffer;

class FilterQuantizeRegressionTest : public ::testing::Test {
  void SetUp() override {
    bins_ = 5;
  }

 protected:
  std::string test_file = "./resources/test_in.png";
  std::string expect_file = "./resources/quantize_5_expected.png";
  std::string generated_file = "./resources/quantize_5_generated.png";
  ImageEditor image_editor_;
  int bins_;
};

TEST_F(FilterQuantizeRegressionTest, ImageRegressionEquality) {
  PixelBuffer *test_buffer_ = new PixelBuffer(test_file);
  PixelBuffer *expected_buffer_ = new PixelBuffer(expect_file);
  image_editor_.set_pixel_buffer(test_buffer_);
  image_editor_.ApplyQuantizeFilter(bins_);
  image_editor_.SaveToFile(generated_file);
  image_editor_.LoadFromFile(generated_file);
  EXPECT_TRUE(*expected_buffer_ == *test_buffer_);
}
