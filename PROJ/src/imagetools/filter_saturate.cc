/*
Copyright (c) 2018

OriginaApplyToBufferl Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#include "imagetools/pixel_buffer.h"
#include "imagetools/color_data.h"
#include "imagetools/filter_saturate.h"
#include "imagetools/image_tools_math.h"

namespace image_tools {

FilterSaturate::FilterSaturate() {}

FilterSaturate::~FilterSaturate() {}

ColorData FilterSaturate::CalculateFilteredPixel(const PixelBuffer &buffer,
                                                 int x, int y) {
  ColorData pixel = buffer.pixel(x, y);
  float lum = pixel.Luminance();
  ColorData gray(lum, lum, lum);
  return ImageToolsMath::Lerp(gray, pixel, sat_scale_);
}

}  // namespace image_tools
