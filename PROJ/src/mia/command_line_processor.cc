/**
Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/
#include "command_line_processor.h"
#include <vector>
#include <string>
#include "imagetools/pixel_buffer.h"
#include "imagetools/color_data.h"


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
CommandLineProcessor::CommandLineProcessor() {
  PixelBuffer *buf = new PixelBuffer(1, 1, image_tools::ColorData(1, 1, 1));
  image_edit_.set_pixel_buffer(buf);
}

void CommandLineProcessor::ProcessCommandLine(int argc, char* argv[]) {
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
  //LoadCommand *load_ptr = new LoadCommand(&image_edit_,in_file);
  cmd_v_.push_back(new LoadCommand(&image_edit_,in_file));
  //loop through commands in argv
  for (int i = 2; i < (argc - 1); i++) {
    std::string argv_cmd = std::string(argv[i]).substr(1);
    if (argv_cmd == "blur") {
      if(i < (argc - 2)) {
        float radius = std::stof(argv[i + 1]);
        cmd_v_.push_back(new BlurFilterCommand(&image_edit_,radius));
        i++;
      }
    } else if (argv_cmd == "edgedetect") {
      cmd_v_.push_back(new EdgeFilterCommand(&image_edit_));
    } else if (argv_cmd == "sharpen") {
      if(i < (argc - 2)) {
        float radius = std::stof(argv[i + 1]);
        cmd_v_.push_back(new SharpenFilterCommand(&image_edit_,radius));
        i++;
      }
    // } else if (cmd == "red") {
    //   return ;
    // } else if (cmd == "green") {
    //   return ;
    // } else if (cmd == "blue") {
    //   return ;
    // } else if (cmd == "quantize") {
    //   return ;
    // } else if (cmd == "saturate") {
    //   return ;
    // } else if (cmd == "threshold") {
    //   return ;
    // } else if (cmd == "motionblur-n-s") {
    //   return ;
    // } else if (cmd == "motionblur-e-w") {
    //   return ;
    // } else if (cmd == "motionblur-ne-sw") {
    //   return ;
    // } else if (cmd == "motionblur-nw-se") {
    //   return ;
    } else {
      std::cout << "invalid commands" << std::endl;
    }
    //ImageEditorCommand *i_e_cmd_ptr = GetComma  cmd_ptr = cmd_v_[0];nd(argv_cmd,i);
   }
  cmd_v_.push_back(new SaveCommand(&image_edit_,out_file));
  //print out the commands in the command vector
  for (unsigned int cmd_index = 0; cmd_index < cmd_v_.size(); cmd_index++) {
    cmd_v_.at(cmd_index)->Execute();
  }
  //delete the pointers in the vector;
  for( int j = 0, i = cmd_v_.size(); j < i ; j++) {
    ImageEditorCommand* img_cmd = cmd_v_.at(j);
    delete img_cmd;
  }
  cmd_v_.clear();
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
