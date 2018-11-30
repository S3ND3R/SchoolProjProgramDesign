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
    //std::cout << "command: " << argv[j] << std::endl;
    std::cout << "command: " << std::string(argv[j]) << std::endl;
  }
  // argv[0] should be file path
  // argv[1] should be inputfile
  // argv[argc-1] should be outputfile
  std::string in_file = std::string(argv[1]);
  std::string out_file = std::string(argv[argc - 1]);
  std::cout << "in_file command: " << in_file << std::endl;
  std::cout << "out_file command: " << out_file << std::endl;
  // loop through commands in argv
  // for (int i = 2; i < (argc - 1); i++) {
  //   std::string argv_cmd = std::string(argv[i]).substr(1);
  //   if (cmd == "blur") {
  //     if(i < (argc - 2)) {
  //     //std::string radius_str = std::string(argv[i + 1]);
  //     float radius = std::stof(argv[i + 1]);
  //     BlurFilterCommand *blur_cmd = new BlurFilterCommand(image_editor_,radius);
  //     cmd_v_.push_back(blur_cmd);
  //     delete blur_cmd;
  //     }
  //     return ;
  //   // } else if (cmd == "edgedetect") {
  //   //   return &t_calligraphy_pen_;
  //   // } else if (cmd == "sharpen") {
  //   //   return ;
  //   // } else if (cmd == "red") {
  //   //   return ;
  //   // } else if (cmd == "green") {
  //   //   return ;
  //   // } else if (cmd == "blue") {
  //   //   return ;
  //   // } else if (cmd == "quantize") {
  //   //   return ;
  //   // } else if (cmd == "saturate") {
  //   //   return ;
  //   // } else if (cmd == "threshold") {
  //   //   return ;
  //   // } else if (cmd == "motionblur-n-s") {
  //   //   return ;
  //   // } else if (cmd == "motionblur-e-w") {
  //   //   return ;
  //   // } else if (cmd == "motionblur-ne-sw") {
  //   //   return ;
  //   // } else if (cmd == "motionblur-nw-se") {
  //   //   return ;
  //   } else {
  //     return NULL;
  //   }
  //   //ImageEditorCommand *i_e_cmd_ptr = GetCommand(argv_cmd,i);
  //  }
  std::cout << "exiting command processor" << std::endl;
}

// ImageEditorCommand *CommandLineProcessor::GetCommand(const std::string &cmd,
//                                                      int cmd_indx) {
//   if (cmd == "blur") {
//     if argv[]
//     BlurFilterCommand *blur_cmd = new BlurFilterCommand(image_editor_,);
//     return ;
//   } else if (cmd == "edgedetect") {
//     return &t_calligraphy_pen_;
//   } else if (cmd == "sharpen") {
//     return ;
//   } else if (cmd == "red") {
//     return ;
//   } else if (cmd == "green") {
//     return ;
//   } else if (cmd == "blue") {
//     return ;
//   } else if (cmd == "quantize") {
//     return ;
//   } else if (cmd == "saturate") {
//     return ;
//   } else if (cmd == "threshold") {
//     return ;
//   } else if (cmd == "motionblur-n-s") {
//     return ;
//   } else if (cmd == "motionblur-e-w") {
//     return ;
//   } else if (cmd == "motionblur-ne-sw") {
//     return ;
//   } else if (cmd == "motionblur-nw-se") {
//     return ;
//   } else {
//     return NULL;
//   }
// }

} //  namespace image_tools
