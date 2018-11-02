/*
Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#ifndef FLASHPHOTO_CONVOLUTION_FILTER_H_
#define FLASHPHOTO_CONVOLUTION_FILTER_H_

#include "flashphoto/float_matrix.h"
#include "flashphoto/pixel_buffer.h"
#include "flashphoto/color_data.h"
#include "flashphoto/filter.h"

namespace image_tools {

class ConvolutionFilter: public Filter {
 public:
  FloatMatrix *CreateKernel();

  void SetupFilter() override;

  void CleanupFilter() override;

  ColorData CalculateFilteredPixel(const PixelBuffer &buffer,
                                   int x, int y) override;

  bool can_calculate_in_place() {return false;}

 private:
  FloatMatrix *kernel_;
};
}  //namespace image_tools

#endif  // FLASHPHOTO_CONVOLUTION_FILTER_H_
