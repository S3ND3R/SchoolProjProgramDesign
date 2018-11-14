/*
Copyright (c) 2018

OriginaApplyToBufferl Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#include <math.h>  // round

#include "imagetools/pixel_buffer.h"
#include "imagetools/color_data.h"
#include "imagetools/filter_quantize.h"

namespace image_tools {

FilterQuantize::FilterQuantize() {}

FilterQuantize::~FilterQuantize() {}

ColorData FilterQuantize::CalculateFilteredPixel(const PixelBuffer &buffer,
                                                   int x, int y) {
  ColorData pixel = buffer.pixel(x, y);
  int num_steps = bins_ - 1;
  pixel.set_red(round(pixel.red()*num_steps)/num_steps);
  pixel.set_green(round(pixel.green()*num_steps)/num_steps);
  pixel.set_blue(round(pixel.blue()*num_steps)/num_steps);

  return pixel;
}
}  // namespace image_tools
