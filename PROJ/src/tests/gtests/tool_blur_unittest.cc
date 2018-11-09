// Copyright (c) 2018, Warren Weber, University of Minnesota.

#include <math.h>
#include <iostream>
#include "gtest/gtest.h"
#include "flashphoto/tool_blur.h"

using image_tools::ToolBlur;

class ToolBlurTest : public ::testing::Test {
  void SetUp() override {}

 protected:
  ToolBlur blur_;
};

TEST_F(ToolBlurTest, HasCorrectName) {
  EXPECT_EQ(blur_.name(), "Blur");
}
