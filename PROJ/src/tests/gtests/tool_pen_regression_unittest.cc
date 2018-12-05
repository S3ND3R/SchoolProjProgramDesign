// Copyright (c) 2018, Warren Weber, University of Minnesota.

#include <iostream>
#include <string>
#include "gtest/gtest.h"
#include "imagetools/image_editor.h"
#include "imagetools/pixel_buffer.h"
#include "imagetools/color_data.h"


using image_tools::ToolPen;
using image_tools::ImageEditor;
using image_tools::PixelBuffer;
using image_tools::ColorData;

class ToolPenRegressionTest : public ::testing::Test {
  void SetUp() override {
    tool_name_ = ToolPen::name();
    tool_color_ = new ColorData(0.8, 0.2, 0.2);
    tool_radius_ = 14.0;
    test_buffer_ = new PixelBuffer(test_file);
    expected_buffer_ = new PixelBuffer(expect_file);
  }

  void TearDown() override {
    delete tool_color_;
  }

 protected:
  std::string test_file = "./resources/test_in.png";
  std::string expect_file = "./resources/pen_expected.png";
  std::string generated_file = "./resources/pen_generated.png";
  ImageEditor image_editor_;
  std::string tool_name_;
  ColorData *tool_color_;
  float tool_radius_;
  PixelBuffer *test_buffer_;
  PixelBuffer *expected_buffer_;
};

TEST_F(ToolPenRegressionTest, ImageRegressionEquality) {
  int y = test_buffer_->height() / 2;
  int x_end = test_buffer_->width() / 2;
  int x_start = 0;
  image_editor_.set_pixel_buffer(test_buffer_);
  image_editor_.StartStroke(tool_name_, *tool_color_, tool_radius_, x_start, y);
  for (int i = x_start; i < x_end; i ++) {
    image_editor_.AddToStroke(i, y);
  }
  image_editor_.EndStroke(x_end, y);
  image_editor_.SaveToFile(generated_file);
  image_editor_.LoadFromFile(generated_file);
  EXPECT_TRUE(*expected_buffer_ == *test_buffer_);
}
