/*
Copyright (c) 2018 

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#ifndef FLASHPHOTO_FILTER_H_
#define FLASHPHOTO_FILTER_H_

#include "flashphoto/pixel_buffer.h"
#include "flashphoto/color_data.h"

class Filter {
 public:
  /** template that defines the key recipe for filtering*/
  ApplyToBuffer(PixelBuffer *buffer);

  virtual SetupFilter();

  virtual ColorData CalculateFilteredPixel(PixelBuffer buffer, int x, int y);

  virtual CleanupFilter();

  virtual bool  can_calculate_in_place() {return true;}
}
#endif  // FLASHPHOTO_FILTER_H_
