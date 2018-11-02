/*
Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#ifndef FLASHPHOTO_FILTER_QUANTIZE_H_
#define FLASHPHOTO_FILTER_QUANTIZE_H_

#include "flashphoto/pixel_buffer.h"
#include "flashphoto/color_data.h"
#include "flashphoto/filter.h"

namespace image_tools {

class FilterQuantize : public Filter {
public:
 // calculates the ColorData for a pixel by limiting excess colors to the
 // amount of bins passed
 ColorData CalculateFilteredPixel(const PixelBuffer &buffer, int x,
                                  int y) override;

 inline void set_num_bins(int bin_number) {bins_ = bin_number;}

private:
  int bins_ = 0;
};
}  // namespace image_tools
#endif  // FLASHPHOTO_FILTER_QUANTIZE_H_
