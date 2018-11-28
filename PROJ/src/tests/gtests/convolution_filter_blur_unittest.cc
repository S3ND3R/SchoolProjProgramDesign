// Copyright (c) 2018, Warren Weber, University of Minnesota.

#include <iostream>
#include "gtest/gtest.h"
#include "imagetools/convolution_filter_blur.h"

using image_tools::ConvolutionFilterBlur;

class ConvolutionFilterBlurTest : public ::testing::Test {
  void SetUp() override {}

 protected:
  ConvolutionFilterBlur blur_filter;
};

TEST_F(ConvolutionFilterBlurTest, SetsCorrectKernelRadius) {
  blur_filter.set_kernel_radius(3);

  EXPECT_EQ(blur_filter.get_kernel_radius(), 3);
}
