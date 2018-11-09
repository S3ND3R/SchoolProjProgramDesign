/*
Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#ifndef FLASHPHOTO_CONVOLUTION_FILTER_EDGE_H_
#define FLASHPHOTO_CONVOLUTION_FILTER_EDGE_H_

#include "flashphoto/float_matrix.h"
#include "flashphoto/convolution_filter.h"

namespace image_tools {

class ConvolutionFilterEdge : public ConvolutionFilter {
 public:
  ConvolutionFilterEdge();

  virtual ~ConvolutionFilterEdge();

  // Convolution Filter Edge kernel applies -1 for each
  // value in the kernel except the center value which is set so that
  // the sum of the values is zero.
  // returns: pointer to a FloatMatrix set to a radius of 1
  FloatMatrix *CreateKernel() override;
};
}  // namespace image_tools
#endif  // FLASHPHOTO_CONVOLUTION_FILTER_EDGE_H_
