/*
Copyright (c) 2018

OriginaApplyToBufferl Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#include "flashphoto/pixel_buffer.h"
#include "flashphoto/color_data.h"
#include "flashphoto/filter_saturate.h"
#include "flashphoto/image_tools_math.h"
namespace image_tools {

ColorData FilterSaturate::CalculateFilteredPixel(const PixelBuffer &buffer, int x,
                                                 int y) {
 ColorData pixel = buffer.pixel(x,y);
 float lum = pixel.Luminance();
 ColorData gray(lum,lum,lum);

 return ImageToolsMath::Lerp(gray,pixel,sat_scale_);
}

}  // namespace image_tools
