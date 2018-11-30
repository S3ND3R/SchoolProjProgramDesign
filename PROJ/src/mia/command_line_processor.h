//command_line_processor.h

#ifndef COMMAND_LINE_PROCESSOR_H_
#define COMMAND_LINE_PROCESSOR_H_

#include "imagetools/image_editor.h"
#include "mia/image_editor_commands.h"


namespace image_tools {
class CommandLineProcessor {
 public:
  void ProcessCommandLine(int argc, char* argv[]);

 //private:
  //int arg_cnt_;
  //char* arg_ptr_;
};
} // namespace image_tools
#endif     // COMMAND_LINE_PROCESSOR_H_
