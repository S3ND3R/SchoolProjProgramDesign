//Copyright (c) 2018, Warren Weber, University of Minnesota.

#include <iostream>
#include <string>
#include "gtest/gtest.h"
#include "imagetools/image_editor.h"
#include "imagetools/pixel_buffer.h"
#include "imagetools/color_data.h"

//plan:
// load from PROJ ./resources/test_in.png into pixel buffer
// apply the test feature
// load from PROJ ./resources/blur_5.0_expected.png into a second pixel buffer
using image_tools::ConvolutionFilterBlur;
using image_tools::ImageEditor;
using image_tools::PixelBuffer;

class FilterBlurRegressionTest : public ::testing::Test {
  void SetUp() override {
    //test_buffer_.loadFromFile(test_file);
    //expected_buffer_.loadFromFile(expect_file);
    image_editor_.set_pixel_buffer(test_buffer_);
    radius_ = 5.0;
  }

 protected:
  std::string test_file = "./resources/test.png";
  std::string expect_file = "./resources/blur_5.0_expected.png";
  PixelBuffer *test_buffer_  = new PixelBuffer(test_file);
  PixelBuffer *expected_buffer_ = new PixelBuffer(expect_file);
  ImageEditor image_editor_;
  float radius_;
};

TEST_F(FilterBlurRegressionTest, ImageRegressionEquality) {
  image_editor_.ApplyBlurFilter(radius_);
  EXPECT_TRUE(*expected_buffer_ == *test_buffer_);
  //delete test_buffer_;
  //delete expected_buffer_;
}
