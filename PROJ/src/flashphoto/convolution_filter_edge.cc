/*
Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#include "flashphoto/float_matrix.h"
#include "flashphoto/convolution_filter_edge.h"

namespace image_tools {

FloatMatrix *ConvolutionFilterEdge::CreateKernel() {
  FloatMatrix *edge_kernel = new FloatMatrix(1.0);
  for (int x = 0; x < edge_kernel->height(); x++) {
    for (int y = 0; y < edge_kernel->width(); y++) {
     edge_kernel->set_value(x, y, -1.0);
    }
  }
  float center = edge_kernel->width() * edge_kernel->width() - 1.0;
  edge_kernel->set_value(1, 1, center);
  return edge_kernel;
}

}  // namespace image_tools
