/*
Copyright (c) 2018

OriginaApplyToBufferl Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#ifndef FLASHPHOTO_FILTER_THRESHOLD_H_
#define FLASHPHOTO_FILTER_THRESHOLD_H_

#include "flashphoto/pixel_buffer.h"
#include "flashphoto/color_data.h"
#include "flashphoto/filter.h"

namespace image_tools {

class FilterThreshold : public Filter {
 public:
  ColorData CalculateFilteredPixel(const PixelBuffer &buffer,
                                   int x, int y) override;

  inline void set_threshold(float val) {threshold_ = val;}

  inline float threshold() const  {return threshold_;}

 private:
  float threshold_ = 1.0;
};

}  // namespace image_tools

#endif  // FLASHPHOTO_FILTER_THRESHOLD_H_
