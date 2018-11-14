/*
Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#ifndef IMAGETOOLS_FILTER_QUANTIZE_H_
#define IMAGETOOLS_FILTER_QUANTIZE_H_

#include "imagetools/pixel_buffer.h"
#include "imagetools/color_data.h"
#include "imagetools/filter.h"

namespace image_tools {

class FilterQuantize : public Filter {
 public:
  FilterQuantize();

  virtual ~FilterQuantize();

  // calculates the ColorData for a pixel by limiting excess colors to the
  // amount of bins passed
  ColorData CalculateFilteredPixel(const PixelBuffer &buffer, int x,
                                  int y) override;

  inline void set_num_bins(int bin_number) {
    if (bin_number > 1)
     bins_ = bin_number;
  }

 private:
  int bins_ = 2;
};
}  // namespace image_tools
#endif  // IMAGETOOLS_FILTER_QUANTIZE_H_
