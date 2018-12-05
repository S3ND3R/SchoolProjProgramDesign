// Copyright (c) 2018, Warren Weber, University of Minnesota.

#include <iostream>
#include <string>
#include "gtest/gtest.h"
#include "mia/command_line_processor.h"

using image_tools::CommandLineProcessor;

class CommandLineProcessorTest : public ::testing::Test {
  void SetUp() override {
    //arg_v_ = {strdup("build/bin/mia"), strdup("in_test.png"), strdup("-blur"), strdup("5.0"), strdup("blur_test_img.png")};
  }

 protected:
  //int arg_count_ = 5;
  //char *arg_v_[5];
  CommandLineProcessor cmd_processor_;
};

TEST_F(CommandLineProcessorTest, AcceptsCorrectCommands) {
  char *arg_v_[5] = {strdup("build/bin/mia"), strdup("resources/in_test.png"),
                     strdup("-blur"), strdup("5.0"),
                     strdup("resources/blur_test_img.png")};
  std::cout << arg_v_[0] << std::endl;
  std::cout << arg_v_[1] << std::endl;
  std::cout << arg_v_[2] << std::endl;
  std::cout << arg_v_[3] << std::endl;
  std::cout << arg_v_[4] << std::endl;
  //cmd_processor_.ProcessCommandLine(5, arg_v_);
  EXPECT_TRUE(cmd_processor_.is_valid_commands_());
}
