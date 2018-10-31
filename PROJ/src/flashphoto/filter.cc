/*
Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#include "flashphoto/filter.h"
#include "flashphoto/color_data.h"
#include "flashphoto/pixel_buffer.h"

namespace image_tools {

void Filter::ApplyToBuffer(PixelBuffer *buffer) {
 int height = buffer->height();
 int width = buffer->width();
 PixelBuffer buff = *buffer;
 if (can_calculate_in_place()) {
 // in the case that you can calculate in place
  for (int i = 0; i < height; i++) {
   for (int j = 0; j < width; j++) {
    // currently should be dereferencing the buffer to calculate the pixel val
    ColorData filter_color = CalculateFilteredPixel(buff, i, j);
    buffer->set_pixel(i, j, filter_color);
   }
  }
 }
 // in the case that the pixel cannot be calculated in place
 else {
  SetupFilter();
  for (int i = 0; i < height; i++) {
   for (int j = 0; j < width; j++) {
    ColorData filter_color = CalculateFilteredPixel(buff, i, j);
    buffer->set_pixel(i, j, filter_color);
   }
  }
  CleanupFilter();
 }
}  // End ApplyToBuffer

void Filter::SetupFilter(){};
void Filter::CleanupFilter(){};

}  // namespace image_tools
