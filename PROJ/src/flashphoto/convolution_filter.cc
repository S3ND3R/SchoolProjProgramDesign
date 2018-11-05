/*
Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/
#include "flashphoto/float_matrix.h"
#include "flashphoto/pixel_buffer.h"
#include "flashphoto/color_data.h"
#include "flashphoto/convolution_filter.h"

namespace image_tools {
 ColorData ConvolutionFilter::CalculateFilteredPixel(const PixelBuffer &buffer,
                                                      int x, int y) {
  SetupFilter();
  double red = 0.0;
  double green = 0.0;
  double blue = 0.0;
  for (int filterY = 0; filterY < kernel_->height(); filterY++) {
   for (int filterX = 0; filterX < kernel_->width(); filterX++) {

   }
  }
  CleanupFilter();
 }

 void ConvolutionFilter::SetupFilter() {
   kernel_ = CreateKernel();
 }
 void ConvolutionFilter::CleanupFilter() {delete kernel_;}
}  // namespace image_tools
