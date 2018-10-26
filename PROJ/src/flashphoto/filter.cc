/*
Copyright (c) 2018 

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#include "flashphoto/filter.h"
#include "flashphoto/color_data.h"
#include "flashphoto/pixel_buffer.h"

Filter::ApplyToBuffer(PixelBuffer *buffer) {
 // in the case that you can calculate in place 
  for (i = 0; i < buffer->height(); i++){
   for (j = 0; j < buffer->width(); j++) {
    ColorData filter_color = CalculateFilteredPixel(buffer, i, j);
    buffer->set_pixel(i, j, filter_color) 
   }
  }
 } 
 // in the case that the pixel cannot be calculated in place
 else {
  SetupFilter();
  for (i = 0; i < buffer->height(); i++){
   for (j = 0; j < buffer->width(); j++) {
    ColorData filter_color = CalculateFilteredPixel(buffer, i, j);
    buffer->set_pixel(i, j, filter_color); 
   }
  }
  CleanupFilter();
 }
}  // End ApplyToBuffer

Filter::SetupFilter() {} 

Filter::CleanupFilter() {}

ColorData Filter::CalculateFilteredPixel(PixelBuffer buffer, int x, int y) {}
