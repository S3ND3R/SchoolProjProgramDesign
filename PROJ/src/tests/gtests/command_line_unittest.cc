// Copyright (c) 2018, Warren Weber, University of Minnesota.

#include <iostream>
#include <string>
#include "gtest/gtest.h"
#include "mia/command_line_processor.h"

using image_tools::CommandLineProcessor;

class CommandLineProcessorTest : public ::testing::Test {
  void SetUp() override {
  }

 protected:
  int arg_count_;
  CommandLineProcessor cmd_processor_;
  char *path = strdup("build/bin/mia");
  char *in_file = strdup("resources/test_in.png");
  char *bad_in_file = strdup("resources/test_in.pn");
  char *correct_cmd_blur = strdup("-blur");
  char *correct_cmd_sharp = strdup("-sharpen");
  char *correct_cmd_edge = strdup("-edgedetect");
  char *correct_cmd_red = strdup("-red");
  char *correct_cmd_green = strdup("-green");
  char *correct_cmd_blue = strdup("-blue");
  char *correct_cmd_quant = strdup("-quantize");
  char *correct_cmd_sat = strdup("-saturate");
  char *correct_cmd_motionblur = strdup("-motionblur-ne-sw");
  char *incorrect_cmd_blr = strdup("-bulr");
  char *missing_dash_cmd_blr = strdup("blur");
  char *float_val = strdup("5.0");
  char *thresh_float = strdup("0.5");
  char *int_val = strdup("5");
  char *Out_of_bnds_float = strdup("500");
  char *non_num_val = strdup("kitty");
  char *out_file = strdup("resources/out_cmd_ln.png");
  char *bad_out_file = strdup("resources/out_cmd_ln.jpg");
};

TEST_F(CommandLineProcessorTest, AcceptsSingleCorrectCommand) {
  arg_count_ = 5;
  char *arg_v_[arg_count_] = {path, in_file, correct_cmd_blur, float_val,
                              out_file};
  cmd_processor_.ProcessCommandLine(arg_count_, arg_v_);
  EXPECT_TRUE(cmd_processor_.is_valid_commands_());
}

TEST_F(CommandLineProcessorTest, AcceptsMultipleCorrectCommands) {
  arg_count_ = 7;
  char *arg_v_[arg_count_] = {path, in_file, correct_cmd_blur, float_val,
                              correct_cmd_sharp, float_val, out_file};
  cmd_processor_.ProcessCommandLine(arg_count_, arg_v_);
  EXPECT_TRUE(cmd_processor_.is_valid_commands_());
}

TEST_F(CommandLineProcessorTest, RejectsSingleIncorrectCommand) {
  arg_count_ = 5;
  char *arg_v_[arg_count_] = {path, in_file, incorrect_cmd_blr, float_val,
                              out_file};
  cmd_processor_.ProcessCommandLine(arg_count_, arg_v_);
  EXPECT_FALSE(cmd_processor_.is_valid_commands_());
}

TEST_F(CommandLineProcessorTest, RejectsMissingDashCommand) {
  arg_count_ = 5;
  char *arg_v_[arg_count_] = {path, in_file, missing_dash_cmd_blr, float_val,
                              out_file};
  cmd_processor_.ProcessCommandLine(arg_count_, arg_v_);
  EXPECT_FALSE(cmd_processor_.is_valid_commands_());
}

TEST_F(CommandLineProcessorTest, RejectsBadValCommand) {
  arg_count_ = 5;
  char *arg_v_[arg_count_] = {path, in_file, correct_cmd_quant, non_num_val,
                              out_file};
  cmd_processor_.ProcessCommandLine(arg_count_, arg_v_);
  EXPECT_FALSE(cmd_processor_.is_valid_commands_());
}

TEST_F(CommandLineProcessorTest, RejectsOutOfBoundsValCommand) {
  arg_count_ = 5;
  char *arg_v_[arg_count_] = {path, in_file, correct_cmd_sat, Out_of_bnds_float,
                              out_file};
  cmd_processor_.ProcessCommandLine(arg_count_, arg_v_);
  EXPECT_FALSE(cmd_processor_.is_valid_commands_());
}

TEST_F(CommandLineProcessorTest, RejectsEgedetecWithValCommand) {
  arg_count_ = 5;
  char *arg_v_[arg_count_] = {path, in_file, correct_cmd_edge, float_val,
                              out_file};
  cmd_processor_.ProcessCommandLine(arg_count_, arg_v_);
  EXPECT_FALSE(cmd_processor_.is_valid_commands_());
}

TEST_F(CommandLineProcessorTest, RejectsMissingValCommand) {
  arg_count_ = 4;
  char *arg_v_[arg_count_] = {path, in_file, correct_cmd_sharp, out_file};
  cmd_processor_.ProcessCommandLine(arg_count_, arg_v_);
  EXPECT_FALSE(cmd_processor_.is_valid_commands_());
}

TEST_F(CommandLineProcessorTest, RejectsMissingInputFileValCommand) {
  arg_count_ = 4;
  char *arg_v_[arg_count_] = {path, correct_cmd_red, float_val, out_file};
  cmd_processor_.ProcessCommandLine(arg_count_, arg_v_);
  EXPECT_FALSE(cmd_processor_.is_valid_commands_());
}

// TEST_F(CommandLineProcessorTest, RejectsMissingOutputFileValCommand) {
//   arg_count_ = 4;
//   char *arg_v_[arg_count_] = {path, in_file, correct_cmd_red, float_val};
//   cmd_processor_.ProcessCommandLine(arg_count_, arg_v_);
//   EXPECT_FALSE(cmd_processor_.is_valid_commands_());
// }

TEST_F(CommandLineProcessorTest, RejectsIncorrectOutputFileValCommand) {
  arg_count_ = 5;
  char *arg_v_[arg_count_] = {path, in_file, correct_cmd_red, float_val,
                              bad_out_file};
  cmd_processor_.ProcessCommandLine(arg_count_, arg_v_);
  EXPECT_FALSE(cmd_processor_.is_valid_commands_());
}

TEST_F(CommandLineProcessorTest, RejectsIncorrectInputFileValCommand) {
  arg_count_ = 5;
  char *arg_v_[arg_count_] = {path, bad_in_file, correct_cmd_red, float_val,
                              out_file};
  cmd_processor_.ProcessCommandLine(arg_count_, arg_v_);
  EXPECT_FALSE(cmd_processor_.is_valid_commands_());
}
