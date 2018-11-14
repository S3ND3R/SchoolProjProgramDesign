/*
Copyright (c) 2018

OriginaApplyToBufferl Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#ifndef IMAGETOOLS_FILTER_SATURATE_H_
#define IMAGETOOLS_FILTER_SATURATE_H_

#include "imagetools/pixel_buffer.h"
#include "imagetools/color_data.h"
#include "imagetools/filter.h"

namespace image_tools {

class FilterSaturate : public Filter {
 public:
  FilterSaturate();

  virtual ~FilterSaturate();

  // calculates the color by linear interpretation using a saturation scale
  ColorData CalculateFilteredPixel(const PixelBuffer &buffer,
                                   int x, int y) override;

  inline void set_saturation_scale(float scale) {sat_scale_ = scale;}

  inline float get_saturation_scale() const  {return sat_scale_;}

 private:
  float sat_scale_ = 1.0;
};

}  // namespace image_tools

#endif  // IMAGETOOLS_FILTER_SATURATE_H_
