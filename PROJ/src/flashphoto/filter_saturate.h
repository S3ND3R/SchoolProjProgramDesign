/*
Copyright (c) 2018

OriginaApplyToBufferl Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#ifndef FLASHPHOTO_FILTER_SATURATE_H_
#define FLASHPHOTO_FILTER_SATURATE_H_

#include "flashphoto/pixel_buffer.h"
#include "flashphoto/color_data.h"
#include "flashphoto/filter.h"

namespace image_tools {

class FilterSaturate : public Filter {
 public:
  ColorData CalculateFilteredPixel(const PixelBuffer &buffer,
                                   int x, int y) override;

  inline void set_saturation_scale(float scale) {sat_scale_ = scale;}

  inline float get_saturation_scale() const  {return sat_scale_;}

 private:
  float sat_scale_ = 1.0;
};

}  // namespace image_tools

#endif  // FLASHPHOTO_FILTER_SATURATE_H_
