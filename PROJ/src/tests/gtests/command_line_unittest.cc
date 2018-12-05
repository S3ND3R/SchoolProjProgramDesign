// Copyright (c) 2018, Warren Weber, University of Minnesota.

#include <iostream>
#include <string>
#include "gtest/gtest.h"
#include "mia/command_line_processor.h"

using image_tools::CommandLineProcessor;

class CommandLineProcessorTest : public ::testing::Test {
  void SetUp() override {
    arg_count_ = 5;
  }

 protected:
  int arg_count_;
  CommandLineProcessor cmd_processor_;
};

TEST_F(CommandLineProcessorTest, AcceptsCorrectCommands) {
  char *arg_v_[arg_count_] = {strdup("build/bin/mia"),
                              strdup("resources/test_in.png"),
                              strdup("-blur"), strdup("5.0"),
                              strdup("resources/blur_test_img.png")};
  cmd_processor_.ProcessCommandLine(arg_count_, arg_v_);
  EXPECT_TRUE(cmd_processor_.is_valid_commands_());
}
