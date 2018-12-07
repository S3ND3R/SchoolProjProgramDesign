/**
Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#ifndef IMAGETOOLS_CONVOLUTION_FILTER_EDGE_H_
#define IMAGETOOLS_CONVOLUTION_FILTER_EDGE_H_

#include "imagetools/float_matrix.h"
#include "imagetools/convolution_filter.h"

namespace image_tools {
/**
  @brief This edge detect filter detects where image brightness
  changes significantly in the curent PixelBuffer*/
class ConvolutionFilterEdge : public ConvolutionFilter {
 public:
  ConvolutionFilterEdge();

  virtual ~ConvolutionFilterEdge();

  /**
  @brief The convolution filter edge kernel applies -1 for each value in the
  kernel except the center value which is set so that the sum of the values
  is zero.*/
  FloatMatrix *CreateKernel() override;
};
}  // namespace image_tools
#endif  // IMAGETOOLS_CONVOLUTION_FILTER_EDGE_H_
