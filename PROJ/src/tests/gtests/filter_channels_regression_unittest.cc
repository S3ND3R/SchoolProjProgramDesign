//Copyright (c) 2018, Warren Weber, University of Minnesota.

#include <iostream>
#include <string>
#include "gtest/gtest.h"
#include "imagetools/image_editor.h"
#include "imagetools/pixel_buffer.h"
#include "imagetools/color_data.h"


using image_tools::FilterChannels;
using image_tools::ImageEditor;
using image_tools::PixelBuffer;

class FilterChannelsRegressionTest : public ::testing::Test {
  void SetUp() override {
    red_scale_ = 1.5;
    green_scale_ = 0.5;
    blue_scale_ = 0.5;
  }

 protected:
  std::string test_file = "./resources/test_in.png";
  std::string expect_file = "./resources/channels_1.5-0.5-0.5_expected.png";
  std::string generated_file = "./resources/channels_1.5-0.5-0.5_generated.png";
  ImageEditor image_editor_;
  float red_scale_;
  float green_scale_;
  float blue_scale_;
};

TEST_F(FilterChannelsRegressionTest, ImageRegressionEquality) {
  PixelBuffer *test_buffer_ = new PixelBuffer(test_file);
  PixelBuffer *expected_buffer_ = new PixelBuffer(expect_file);
  image_editor_.set_pixel_buffer(test_buffer_);
  image_editor_.ApplyChannelsFilter(red_scale_, green_scale_, blue_scale_);
  image_editor_.SaveToFile(generated_file);
  image_editor_.LoadFromFile(generated_file);
  EXPECT_TRUE(*expected_buffer_ == *test_buffer_);
  //delete test_buffer_;
};
