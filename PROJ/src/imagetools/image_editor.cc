/**

Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 2018, University of Minnesota

Author(s) of Significant Updates/Modifications to the File:
  ...
*/

#include "imagetools/image_editor.h"

namespace imagetools {

ImageEditor::ImageEditor(PixelBuffer *buffer) {
  current_buffer_ = buffer;
}

ImageEditor::ImageEditor(){
  current_buffer_ = NULL;
}

ImageEditor::~ImageEditor(){
  if (current_buffer_ != NULL)
    delete current_buffer_;
}

void ImageEditor::LoadFromFile(const std::string &filename) {
  if (current_buffer_ != NULL) {
    SaveStateForPossibleUndo();
    current_buffer_->LoadFromFile(filename);
  } else {
    current_buffer_ = new PixelBuffer(filename);
  }
}

void ImageEditor::SaveToFile(const std::string &filename) {
  current_buffer_->SaveToFile(filename);
}

}  // namespace imagetools
