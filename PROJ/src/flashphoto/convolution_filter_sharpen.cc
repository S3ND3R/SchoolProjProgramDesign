/*
Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#include "flashphoto/float_matrix.h"
#include "flashphoto/convolution_filter_sharpen.h"

namespace image_tools {
 FloatMatrix *ConvolutionFilterSharpen::CreateKernel() {
   int radius = get_kernel_radius();
   FloatMatrix *sharp_kernel = new FloatMatrix(radius);
   for (int x = 0; x < sharp_kernel->height(); x++) {
    for (int y = 0; y < sharp_kernel->width(); y++) {
      sharp_kernel->set_value(x,y,-1.0);
    }
   }
   float center = radius * radius;
   sharp_kernel->set_value(radius,radius,center);
   return sharp_kernel;
 }
}  // namespace image_tools
