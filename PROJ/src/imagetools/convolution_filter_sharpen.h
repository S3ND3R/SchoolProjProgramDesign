/*
Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#ifndef IMAGETOOLS_CONVOLUTION_FILTER_SHARPEN_H_
#define IMAGETOOLS_CONVOLUTION_FILTER_SHARPEN_H_

#include "imagetools/float_matrix.h"
#include "imagetools/convolution_filter.h"

namespace image_tools {

class ConvolutionFilterSharpen : public ConvolutionFilter {
 public:
  ConvolutionFilterSharpen();

  virtual ~ConvolutionFilterSharpen();

  // Kernel sets all values but the center to -1, center is set so that the
  // sum of values is equal to 1
  // returns: FloatMatrix pointer & radius == ConvolutionFilter::kernel_radius_
  FloatMatrix *CreateKernel() override;
};
}  // namespace image_tools
#endif  // IMAGETOOLS_CONVOLUTION_FILTER_SHARPEN_H_
