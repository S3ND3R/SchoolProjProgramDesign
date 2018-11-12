/*
Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#ifndef FLASHPHOTO_FILTER_H_
#define FLASHPHOTO_FILTER_H_

#include "flashphoto/pixel_buffer.h"
#include "flashphoto/color_data.h"

namespace image_tools {

class Filter {
 public:
  Filter();

  virtual ~Filter();

  /** template that defines the key recipe for filtering*/
  void ApplyToBuffer(PixelBuffer *buffer);

  virtual void SetupFilter();

  // derived classes define CalculateFilteredPixel
  // returns: ColorData after the filter has been applied
  virtual ColorData CalculateFilteredPixel(const PixelBuffer &buffer,
                                           int x, int y) = 0;

  virtual void CleanupFilter();

  virtual bool  can_calculate_in_place() {return true;}
};

}  // namespace image_tools

#endif  // FLASHPHOTO_FILTER_H_