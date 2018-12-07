/**
@Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#ifndef IMAGETOOLS_CONVOLUTION_FILTER_BLUR_H_
#define IMAGETOOLS_CONVOLUTION_FILTER_BLUR_H_

#include "imagetools/float_matrix.h"
#include "imagetools/convolution_filter.h"

namespace image_tools {
/**
@brief This convolution blur filter applies a gaussina blur filter to the
current PixelBuffer .*/
class ConvolutionFilterBlur : public ConvolutionFilter {
 public:
  ConvolutionFilterBlur();

  virtual ~ConvolutionFilterBlur();

  /**
  @brief Convolution Filter Blur kernel applies gaussian equation for each
  value in the kernel.*/
  FloatMatrix *CreateKernel() override;
};

}  // namespace image_tools
#endif  // IMAGETOOLS_CONVOLUTION_FILTER_BLUR_H_
