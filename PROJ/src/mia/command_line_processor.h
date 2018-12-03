/**
Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#ifndef COMMAND_LINE_PROCESSOR_H_
#define COMMAND_LINE_PROCESSOR_H_

#include <vector>
#include "imagetools/image_editor.h"
#include "mia/image_editor_commands.h"
#include "imagetools/convolution_filter_motion_blur.h"

namespace image_tools {
class CommandLineProcessor {
 public:
  CommandLineProcessor();

  void ProcessCommandLine(int argc, char* argv[]);

  ImageEditorCommand *GetCommand(const std::string &cmd, int cmd_indx);

 private:
  std::vector<ImageEditorCommand*> cmd_v_;
  ImageEditor image_edit_;
  float red_chan_;
  float green_chan_;
  float blue_chan_;
  ConvolutionFilterMotionBlur::BlurDir blur_dir_;
  bool valid_cmds_;
  std::string help_message_;
};
} // namespace image_tools
#endif     // COMMAND_LINE_PROCESSOR_H_
