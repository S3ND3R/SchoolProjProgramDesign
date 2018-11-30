/**
Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/
#include "command_line_processor.h"
#include <vector>
#include <string>

/**
* commands:
* blur r
* edgedetect
* sharpen r
* red s
* green s
* blue s
* quantize n
* saturate s
* threshold c
* motionblur-n-s r
* motionblur-e-w r
* motionblur-ne-sw r
* motionblur-nw-se r
*/
namespace image_tools {
void CommandLineProcessor::ProcessCommandLine(int argc, char* argv[]){
  // outputting commands entered
  std::cout << "There are " << argc << " commands:" << std::endl;
  for (int j = 0; j < argc; j++) {
    std::cout << "command: " << argv[j] << std::endl;
  }
  std::string in_file = std::string(argv[0]);
  for (int i = 1; i < (argc - 1); i++) {

  }
  std::cout << "exiting command processor" << std::endl;
}

ImageEditorCommand *CommandLineProcessor::GetCommand(const std::string &cmd) {
  if (cmd == "blur") {
    return ;
  } else if (cmd == "edgedetect") {
    return &t_calligraphy_pen_;
  } else if (cmd == "sharpen") {
    return ;
  } else if (cmd == "red") {
    return ;
  } else if (cmd == "green") {
    return ;
  } else if (cmd == "blue") {
    return ;
  } else if (cmd == "quantize") {
    return ;
  } else if (cmd == "saturate") {
    return ;
  } else if (cmd == "threshold") {
    return ;
  } else if (cmd == "motionblur-n-s") {
    return ;
  } else if (cmd == "motionblur-e-w") {
    return ;
  } else if (cmd == "motionblur-ne-sw") {
    return ;
  } else if (cmd == "motionblur-nw-se") {
    return ;
  } else {
    return NULL;
  }
}

} //  namespace image_tools
