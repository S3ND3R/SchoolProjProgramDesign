/*
Copyright (c) 2018

OriginaApplyToBufferl Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#include "imagetools/pixel_buffer.h"
#include "imagetools/color_data.h"
#include "imagetools/filter_threshold.h"

namespace image_tools {

FilterThreshold::FilterThreshold() {}

FilterThreshold::~FilterThreshold() {}

ColorData FilterThreshold::CalculateFilteredPixel(const PixelBuffer &buffer,
                                                  int x, int y) {
  ColorData white(1.0, 1.0, 1.0);
  ColorData black(0.0, 0.0, 0.0);
  ColorData pixel = buffer.pixel(x, y);
  if (((pixel.red() + pixel.blue() + pixel.green())/ 3.0) > threshold_) {
    return white;
  }
  return black;
}

}  // namespace image_tools
