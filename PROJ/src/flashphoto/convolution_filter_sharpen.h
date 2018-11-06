/*
Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#ifndef CONVOLUTION_FILTER_SHARPEN_H
#define CONVOLUTION_FILTER_SHARPEN_H

#include "flashphoto/float_matrix.h"
#include "flashphoto/convolution_filter.h"

namespace image_tools {

class ConvolutionFilterSharpen : public ConvolutionFilter {
 public:
  FloatMatrix *CreateKernel() override;

  };
}  // namespace image_tools
#endif  // CONVOLUTION_FILTER_SHARPEN_H
