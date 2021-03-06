/*
Copyright (c) 2018

OriginaApplyToBufferl Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#include "imagetools/pixel_buffer.h"
#include "imagetools/color_data.h"
#include "imagetools/filter_channels.h"

namespace image_tools {

FilterChannels::FilterChannels() {}

FilterChannels::~FilterChannels() {}

ColorData FilterChannels::CalculateFilteredPixel(const PixelBuffer &buffer,
                                                 int x, int y) {
  ColorData pixel = buffer.pixel(x, y);
  pixel.set_red(pixel.red()*r_scale_);
  pixel.set_green(pixel.green()*g_scale_);
  pixel.set_blue(pixel.blue()*b_scale_);

  return pixel;
}
}  // namespace image_tools
