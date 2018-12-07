/**
Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/
#include "mia/command_line_processor.h"
#include <mingfx.h>
#include <vector>
#include <string>
#include <exception>
#include "imagetools/pixel_buffer.h"
#include "imagetools/color_data.h"
#include "imagetools/convolution_filter_motion_blur.h"

namespace image_tools {
CommandLineProcessor::CommandLineProcessor() {
  PixelBuffer *buf = new PixelBuffer(1, 1, image_tools::ColorData(1, 1, 1));
  image_edit_.set_pixel_buffer(buf);
  red_chan_ = 1.0;
  green_chan_ = 1.0;
  blue_chan_ = 1.0;
  blur_dir_ = ConvolutionFilterMotionBlur::BlurDir::BLUR_DIR_N_S;
  valid_cmds_ = true;
  help_message_ = "\n<Help Message for Mia>\n\n"
                "Image Processing Commands:\n"
                "-blur r             <apply a gaussian blur of radius r>\n"
                "-edgedetect         <apply an edge detection filter>\n"
                "-sharpen r          <apply a sharpening filter of radius r>\n"
                "-red s              <scale red channel by a factor of s>\n"
                "-green s            <scale green channel by a factor of s>\n"
                "-blue s             <scale blue channel by a factor of s>\n"
                "-quantize n         <quantize each color channel in n bins>\n"
                "-saturate s         <saturate colors by a scale factor of s>\n"
                "-threshold c        <threshold using cutoff value c>\n"
                "-motionblur-n-s r   <north-south motion blur with radius r>\n"
                "-motionblur-e-w r   <east-west motion blur with radius r>\n"
                "-motionblur-ne-sw r <northeast-southwest motion blur "
                                     "with radius r>\n"
                "-motionblur-nw-se r <northwest-southeast motion blur "
                                     "with radius r>\n\n"
                "Valid Command Format:\n"
                "<application> <input filename> <-commands...> "
                "<output filename>\n";
}

void CommandLineProcessor::ProcessCommandLine(int argc, char* argv[]) {
  // check that there are enough arguments
  // if there is only 2 brings up help message
  if (argc > 2) {
    // argv[0] should be file path
    // argv[1] should be inputfile
    // argv[argc-1] should be outputfile
    std::string in_file = std::string(argv[1]);
    std::string out_file = std::string(argv[argc - 1]);
    if (!(mingfx::Platform::FileExists(in_file))) {
      valid_cmds_ = false;
      std::cout << "\n File does not exist." << std::endl;
    }
    // checking correct postfix on image files
    std::string in_post_fix = in_file.substr((in_file.size()- 4), 4);
    std::string out_post_fix = out_file.substr((out_file.size()- 4), 4);
    if (((in_post_fix != ".png") && (in_post_fix != ".PNG")) ||
        ((out_post_fix != ".png") && (out_post_fix != ".PNG"))) {
          std::cout << "\nIncorrect file naming"
                       " <files must have .png or .PNG as postfix>\n";
          valid_cmds_ = false;
        }
    cmd_v_.push_back(new LoadCommand(&image_edit_, in_file));
    // loop through commands in argv
    for (int i = 2; valid_cmds_ && i < (argc - 1); i++) {
      std::string argv_cmd = std::string(argv[i]).substr(1);
      // blur case
      if (argv_cmd == "blur") {
        // if-satement checks that the correct number of arguments
        // have been passed
        if (i < (argc - 2)) {
          try {
            float radius = std::stof(argv[i + 1]);
            if (radius < 1.0 || radius > 10.0) {
              std::cout << "\nRadius value is out-of bounds "
                           "<values should be between 1 and 10>" << std::endl;
              valid_cmds_ = false;
            }
            cmd_v_.push_back(new BlurFilterCommand(&image_edit_, radius));
            i++;
          } catch (const std::exception& e) {
              valid_cmds_ = false;
              std::cout << e.what() << std::endl;
          }
        } else {valid_cmds_ = false;}
        // edge detect case
      } else if (argv_cmd == "edgedetect") {
        cmd_v_.push_back(new EdgeFilterCommand(&image_edit_));
        // sharpen case
      } else if (argv_cmd == "sharpen") {
        if (i < (argc - 2)) {
          try {
            float radius = std::stof(argv[i + 1]);
            if (radius < 1.0 || radius > 10.0) {
              std::cout << "\nRadius value is out-of bounds "
                           "<values should be between 1 and 10>" << std::endl;
              valid_cmds_ = false;
            }
            cmd_v_.push_back(new SharpenFilterCommand(&image_edit_, radius));
            i++;
          } catch (const std::exception& e) {
              valid_cmds_ = false;
              std::cout << e.what() << std::endl;
          }
        } else {valid_cmds_ = false;}
        // red case
      } else if (argv_cmd == "red") {
        if (i < (argc - 2)) {
          try {
            float color_scale = std::stof(argv[i + 1]);
            if (color_scale <= 0.0 || color_scale > 10.0) {
              std::cout << "\nScale value is out-of bounds "
                           "<scale should be greater than 0 "
                           "and less than or equal to 10>" << std::endl;
              valid_cmds_ = false;
            }
            red_chan_ = color_scale;
            i++;
          } catch (const std::exception& e) {
              valid_cmds_ = false;
              std::cout << e.what() << std::endl;
          }
        } else {valid_cmds_ = false;}
        // green case
      } else if (argv_cmd == "green") {
        if (i < (argc - 2)) {
          try {
            float color_scale = std::stof(argv[i + 1]);
            if (color_scale <= 0.0 || color_scale > 10.0) {
              std::cout << "\nScale value is out-of bounds "
                           "<scale should be greater than 0 "
                           "and less than or equal to 10>" << std::endl;
              valid_cmds_ = false;
            }
            green_chan_ = color_scale;
            i++;
          } catch (const std::exception& e) {
              valid_cmds_ = false;
              std::cout << e.what() << std::endl;
          }
        } else {valid_cmds_ = false;}
        // blue case
      } else if (argv_cmd == "blue") {
        if (i < (argc - 2)) {
          try {
            float color_scale = std::stof(argv[i + 1]);
            if (color_scale <= 0.0 || color_scale > 10.0) {
              std::cout << "\nScale value is out-of bounds "
                           "<scale should be greater than 0 "
                           "and less than or equal to 10>" << std::endl;
              valid_cmds_ = false;
            }
            blue_chan_ = color_scale;
            i++;
          } catch (const std::exception& e) {
              valid_cmds_ = false;
              std::cout << e.what() << std::endl;
          }
        } else {valid_cmds_ = false;}
        // quantize case
      } else if (argv_cmd == "quantize") {
        if (i < (argc - 2)) {
          try {
            int bins = std::stoi(argv[i + 1]);
            if (bins < 1 || bins > 256) {
              std::cout << "\nNumber of bins is out-of bounds "
                           "<bins should be between 1 and 256>" << std::endl;
              valid_cmds_ = false;
            }
            cmd_v_.push_back(new QuantizeFilterCommand(&image_edit_, bins));
            i++;
          } catch (const std::exception& e) {
              valid_cmds_ = false;
              std::cout << e.what() << std::endl;
          }
        } else {valid_cmds_ = false;}
        // saturate case
      } else if (argv_cmd == "saturate") {
        if (i < (argc - 2)) {
          try {
            float scale = std::stof(argv[i + 1]);
            if (scale <= 0.0 || scale > 10.0) {
              std::cout << "\nScale value is out-of bounds "
                           "<scale should be greater than 0 "
                           "and less than or equal to 10>" << std::endl;
              valid_cmds_ = false;
            }
            cmd_v_.push_back(new SaturateFilterCommand(&image_edit_, scale));
            i++;
          } catch (const std::exception& e) {
              valid_cmds_ = false;
              std::cout << e.what() << std::endl;
          }
        } else {valid_cmds_ = false;}
        // threshold case
      } else if (argv_cmd == "threshold") {
        if (i < (argc - 2)) {
          try {
            float cutoff = std::stof(argv[i + 1]);
            if (cutoff <= 0.0 || cutoff > 1.0) {
              std::cout << "\nCutoff value is out-of bounds "
                           "<cutoff should be greater than 0 "
                           "and less than or equal to 1>" << std::endl;
              valid_cmds_ = false;
            }
            cmd_v_.push_back(new ThresholdFilterCommand(&image_edit_, cutoff));
            i++;
          } catch (const std::exception& e) {
              valid_cmds_ = false;
              std::cout << e.what() << std::endl;
          }
        } else {valid_cmds_ = false;}
        // motionblur-n-s case
      } else if (argv_cmd == "motionblur-n-s") {
        if (i < (argc - 2)) {
          try {
            float radius = std::stof(argv[i + 1]);
            if (radius < 1.0 || radius > 10.0) {
              std::cout << "\nRadius value is out-of bounds "
                           "<values should be between 1 and 10>" << std::endl;
              valid_cmds_ = false;
            }
            cmd_v_.push_back(new MotionBlurFilterCommand(&image_edit_, radius,
                                                         blur_dir_));
            i++;
          } catch (const std::exception& e) {
              valid_cmds_ = false;
              std::cout << e.what() << std::endl;
          }
        } else {valid_cmds_ = false;}
        // motionblur-e-w case
      } else if (argv_cmd == "motionblur-e-w") {
        if (i < (argc - 2)) {
          try {
            float radius = std::stof(argv[i + 1]);
            if (radius < 1.0 || radius > 10.0) {
              std::cout << "\nRadius value is out-of bounds "
                           "<values should be between 1 and 10>" << std::endl;
              valid_cmds_ = false;
            }
            blur_dir_ = ConvolutionFilterMotionBlur::BlurDir::BLUR_DIR_E_W;
            cmd_v_.push_back(new MotionBlurFilterCommand(&image_edit_, radius,
                                                         blur_dir_));
            i++;
          } catch (const std::exception& e) {
              valid_cmds_ = false;
              std::cout << e.what() << std::endl;
          }
        } else {valid_cmds_ = false;}
        // motionblur-ne-sw case
      } else if (argv_cmd == "motionblur-ne-sw") {
        if (i < (argc - 2)) {
          try {
            float radius = std::stof(argv[i + 1]);
            if (radius < 1.0 || radius > 10.0) {
              std::cout << "\nRadius value is out-of bounds "
                           "<values should be between 1 and 10>" << std::endl;
              valid_cmds_ = false;
            }
            blur_dir_ = ConvolutionFilterMotionBlur::BlurDir::BLUR_DIR_NE_SW;
            cmd_v_.push_back(new MotionBlurFilterCommand(&image_edit_, radius,
                                                         blur_dir_));
            i++;
          } catch (const std::exception& e) {
              valid_cmds_ = false;
              std::cout << e.what() << std::endl;
          }
        } else {valid_cmds_ = false;}
        // motionblur-ne-sw case
      } else if (argv_cmd == "motionblur-nw-se") {
        if (i < (argc - 2)) {
          try {
            float radius = std::stof(argv[i + 1]);
            if (radius < 1.0 || radius > 10.0) {
              std::cout << "\nRadius value is out-of bounds "
                           "<values should be between 1 and 10>" << std::endl;
              valid_cmds_ = false;
            }
            blur_dir_ = ConvolutionFilterMotionBlur::BlurDir::BLUR_DIR_NW_SE;
            cmd_v_.push_back(new MotionBlurFilterCommand(&image_edit_, radius,
                                                         blur_dir_));
            i++;
          } catch (const std::exception& e) {
              valid_cmds_ = false;
              std::cout << e.what() << std::endl;
          }
        } else {valid_cmds_ = false;}
      } else {
        valid_cmds_ = false;
      }
    }
    if (valid_cmds_) {
      cmd_v_.push_back(new ChannelsFilterCommand(&image_edit_, red_chan_,
                                                 green_chan_, blue_chan_));
      cmd_v_.push_back(new SaveCommand(&image_edit_, out_file));
      // print out the commands in the command vector
      for (unsigned int cmd_indx = 0; cmd_indx < cmd_v_.size(); cmd_indx++) {
          cmd_v_.at(cmd_indx)->Execute();
      }
    } else {std::cout << help_message_ << std::endl;}
    // delete the pointers in the vector;
    for (int j = 0, i = cmd_v_.size(); j < i ; j++) {
      ImageEditorCommand* img_cmd = cmd_v_.at(j);
      delete img_cmd;
    }
    cmd_v_.clear();
  } else {
    std::cout << help_message_ << std::endl;
  }
}

}  // namespace image_tools
