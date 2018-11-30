//
#include "command_line_processor.h"

namespace image_tools {
void CommandLineProcessor::ProcessCommandLine(int argc, char* argv[]){
  std::cout << "entering command processor" << std::endl;
  std::cout << "there are " << argc << " commands" << std::endl;
  for (int i = 0; i < argc; i++) {
    std::cout << "command: " << argv[i] << std::endl;
  }
  std::cout << "exiting command processor" << std::endl;
}

} //  namespace image_tools
