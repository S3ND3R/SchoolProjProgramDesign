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

ColorData FilterSaturate::CalculateFilteredPixel(PixelBuffer buffer, int x,
                                                 int y) {
 ColorData pixel = buffer.pixel(x,y);
 float luminance = pixel.Luminance();
 float factor = 100;
 ImageToolsMath lerp_val;

 float col_val = lerp_val.Lerp<float>(luminance, sat_scale_, factor);

 // placeholder must figure out lerp
 return pixel * col_val;
}

}  // namespace image_tools


