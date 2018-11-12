/*
Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#include "flashphoto/filter.h"
#include "flashphoto/color_data.h"
#include "flashphoto/pixel_buffer.h"

namespace image_tools {

Filter::Filter() {}

Filter::~Filter() {}

void Filter::ApplyToBuffer(PixelBuffer *buffer) {
  int height = buffer->height();
  int width = buffer->width();
  if (can_calculate_in_place()) {
    // in the case that you can calculate in place
    for (int i = 0; i < width; i++) {
     for (int j = 0; j < height; j++) {
      // currently should be dereferencing the buffer to calculate the pixel val
      ColorData filter_color = CalculateFilteredPixel(*buffer, i, j);
      buffer->set_pixel(i, j, filter_color);
     }
    }
  } else {
    // need copy of the pixel buffer
    PixelBuffer *buffer_copy = new PixelBuffer(*buffer);
    SetupFilter();
    for (int i = 0; i < width; i++) {
     for (int j = 0; j < height; j++) {
      ColorData filter_color = CalculateFilteredPixel(*buffer_copy, i, j);
      buffer->set_pixel(i, j, filter_color);
     }
    }
    delete buffer_copy;
    CleanupFilter();
  }
}  // End ApplyToBuffer

void Filter::SetupFilter() {}
void Filter::CleanupFilter() {}

}  // namespace image_tools
