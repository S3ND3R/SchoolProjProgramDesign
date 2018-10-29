/*
Copyright (c) 2018 

OriginaApplyToBufferl Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#ifndef FLASHPHOTO_FILTER_SATURATE_H_
#define FLASHPHOTO_FILTER_SATURATE_H_

#include "flashphoto/pixel_buffer.h"
#include "flashphoto/color_data.h"

namespace image_tools {

class FilterSaturate: public Filter {
 public:
  ColorData CalculateFilteredPixel(PixelBuffer buffer, int x, int y) override;
};

}  // namespace image_tools

#endif  // FLASHPHOTO_FILTER_SATURATION_H_
                                          
