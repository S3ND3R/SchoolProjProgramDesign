/*
Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#ifndef FLASHPHOTO_CONVOLUTION_FILTER_BLUR_H_
#define FLASHPHOTO_CONVOLUTION_FILTER_BLUR_H_

#include "flashphoto/float_matrix.h"
#include "flashphoto/convolution_filter.h"

namespace image_tools {

class ConvolutionFilterBlur : public ConvolutionFilter {
 public:
  ConvolutionFilterBlur();

  virtual ~ConvolutionFilterBlur();

  // Convolution Filter Blur kernel applies gaussian equation for each
  // value in the kernel, sunm of kernel values should be equal to one
  // returns: pointer to a FloatMatrix set up using:
  //          ConvolutionFilter::kernel_radius_
  FloatMatrix *CreateKernel() override;
};

}  // namespace image_tools
#endif  // FLASHPHOTO_CONVOLUTION_FILTER_BLUR_H_
