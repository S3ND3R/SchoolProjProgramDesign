/*
Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#ifndef FLASHPHOTO_CONVOLUTION_FILTER_SHARPEN_H_
#define FLASHPHOTO_CONVOLUTION_FILTER_SHARPEN_H_

#include "flashphoto/float_matrix.h"
#include "flashphoto/convolution_filter.h"

namespace image_tools {

class ConvolutionFilterSharpen : public ConvolutionFilter {
 public:
  FloatMatrix *CreateKernel() override;
};
}  // namespace image_tools
#endif  // FLASHPHOTO_CONVOLUTION_FILTER_SHARPEN_H_
