/*
Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#include <cmath>
#include "imagetools/float_matrix.h"
#include "imagetools/convolution_filter_sharpen.h"
#include "imagetools/image_tools_math.h"

namespace image_tools {

ConvolutionFilterSharpen::ConvolutionFilterSharpen() {}

ConvolutionFilterSharpen::~ConvolutionFilterSharpen() {}

FloatMatrix* ConvolutionFilterSharpen::CreateKernel() {
  int radius = get_kernel_radius();
  FloatMatrix* kernel =
      new FloatMatrix(round(radius * 2.0) + 1, round(radius * 2.0) + 1);

  for (int j = 0; j < kernel->height(); j++) {
    for (int i = 0; i < kernel->width(); i++) {
      int x = i - kernel->width() / 2;
      int y = j - kernel->height() / 2;
      float dist = sqrt(x * x + y * y);
      float intensity = ImageToolsMath::Gaussian(dist, radius);
      kernel->set_value(i, j, intensity);
    }
  }
  kernel->Normalize();

  // Negate all the values
  kernel->Scale(-1.0);

  // Add two to the middle
  float middle_value = kernel->value(kernel->width() / 2, kernel->height() / 2);
  kernel->set_value(kernel->width() / 2, kernel->height() / 2,
                    middle_value + 2.0);

  return kernel;
}

}  // namespace image_tools
