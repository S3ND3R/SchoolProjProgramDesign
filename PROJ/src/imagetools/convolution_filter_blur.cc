/*
Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#include "imagetools/float_matrix.h"
#include "imagetools/image_tools_math.h"
#include "imagetools/convolution_filter_blur.h"

namespace image_tools {
  ConvolutionFilterBlur::ConvolutionFilterBlur() {}

  ConvolutionFilterBlur::~ConvolutionFilterBlur() {}

  FloatMatrix *ConvolutionFilterBlur::CreateKernel() {
    int radius = get_kernel_radius();
    FloatMatrix *blur_kernel = new FloatMatrix(radius);
    float sigma = blur_kernel->width() / 2.0;
    for (int x = 0; x < blur_kernel->height(); x++) {
     for (int y = 0; y < blur_kernel->width(); y++) {
       float x_distance = (x - sigma) * (x - sigma);
       float y_distance = (y - sigma) * (y - sigma);
       float distance = sqrt(x_distance + y_distance);
       float gauss_val = ImageToolsMath::Gaussian(distance, radius);
       blur_kernel->set_value(x, y, gauss_val);
     }
    }
    blur_kernel->Normalize();
    return blur_kernel;
  }
}  // namespace image_tools
