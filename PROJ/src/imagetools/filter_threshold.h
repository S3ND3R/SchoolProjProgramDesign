/*
Copyright (c) 2018

OriginaApplyToBufferl Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#ifndef IMAGETOOLS_FILTER_THRESHOLD_H_
#define IMAGETOOLS_FILTER_THRESHOLD_H_

#include "imagetools/pixel_buffer.h"
#include "imagetools/color_data.h"
#include "imagetools/filter.h"

namespace image_tools {

class FilterThreshold : public Filter {
 public:
  FilterThreshold();

  virtual ~FilterThreshold();

  // calculates color by setting color to white or black if the average of the
  // rgb is greater than the passed threshold value
  ColorData CalculateFilteredPixel(const PixelBuffer &buffer,
                                   int x, int y) override;

  inline void set_threshold(float val) {threshold_ = val;}

  inline float threshold() const  {return threshold_;}

 private:
  float threshold_ = 1.0;
};

}  // namespace image_tools

#endif  // IMAGETOOLS_FILTER_THRESHOLD_H_
