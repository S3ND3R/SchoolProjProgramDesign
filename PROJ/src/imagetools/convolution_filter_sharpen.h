/**
@file filter_sharpen.h
Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/
#ifndef IMAGETOOLS_CONVOLUTION_FILTER_SHARPEN_H_
#define IMAGETOOLS_CONVOLUTION_FILTER_SHARPEN_H_

#include "imagetools/float_matrix.h"
#include "imagetools/convolution_filter.h"

namespace image_tools {
/**
@brief This sharpen filter enhances edge definition in the current
PixelBuffer */
class ConvolutionFilterSharpen : public ConvolutionFilter {
 public:
  ConvolutionFilterSharpen();

  virtual ~ConvolutionFilterSharpen();

  /**
  @brief The kernel sets all values to -1 except the center value, which is set
  so that the sum of all values in the kernel is 0*/
  FloatMatrix *CreateKernel() override;
};
}  // namespace image_tools
#endif  // IMAGETOOLS_CONVOLUTION_FILTER_SHARPEN_H_
