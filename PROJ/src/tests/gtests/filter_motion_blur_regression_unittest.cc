//Copyright (c) 2018, Warren Weber, University of Minnesota.

#include <iostream>
#include <string>
#include "gtest/gtest.h"
#include "imagetools/image_editor.h"
#include "imagetools/pixel_buffer.h"
#include "imagetools/color_data.h"
#include "imagetools/convolution_filter_motion_blur.h"


using image_tools::ConvolutionFilterMotionBlur;
using image_tools::ImageEditor;
using image_tools::PixelBuffer;

class FilterMotionBlurRegressionTest : public ::testing::Test {
  void SetUp() override {
    radius_ = 5.0;
    blur_dir_ = ConvolutionFilterMotionBlur::BLUR_DIR_N_S;
  }

 protected:
  std::string test_file = "./resources/test_in.png";
  std::string expect_file = "./resources/motion_blur-n-s_5.0_expected.png";
  std::string generated_file = "./resources/motion_blur-n-s_5.0_generated.png";
  ImageEditor image_editor_;
  float radius_;
  ConvolutionFilterMotionBlur::BlurDir blur_dir_;
};

TEST_F(FilterMotionBlurRegressionTest, ImageRegressionEquality) {
  PixelBuffer *test_buffer_ = new PixelBuffer(test_file);
  PixelBuffer *expected_buffer_ = new PixelBuffer(expect_file);
  image_editor_.set_pixel_buffer(test_buffer_);
  image_editor_.ApplyMotionBlurFilter(radius_, blur_dir_);
  image_editor_.SaveToFile(generated_file);
  image_editor_.LoadFromFile(generated_file);
  EXPECT_TRUE(*expected_buffer_ == *test_buffer_);
};
