// Copyright (c) 2018, Warren Weber, University of Minnesota.

#include <math.h>
#include <iostream>
#include "gtest/gtest.h"
#include "imagetools/tool_eraser.h"

using image_tools::ToolEraser;

class ToolEraserTest : public ::testing::Test {
  void SetUp() override {}

 protected:
  ToolEraser eraser_;
};

TEST_F(ToolEraserTest, HasCorrectName) {
  EXPECT_EQ(eraser_.name(), "Eraser");
}
