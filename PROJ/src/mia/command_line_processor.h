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


namespace image_tools {
class CommandLineProcessor {
 public:
  void ProcessCommandLine(int argc, char* argv[]);

  ImageEditorCommand *GetCommand(const std::string &cmd);

 private:
   std::vector<ImageEditorCommand*> cmd_v_;
  //int arg_cnt_;
  //char* arg_ptr_;
};
} // namespace image_tools
#endif     // COMMAND_LINE_PROCESSOR_H_
