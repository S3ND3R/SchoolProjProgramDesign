/*
Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/
#include "imagetools/float_matrix.h"
#include "imagetools/pixel_buffer.h"
#include "imagetools/color_data.h"
#include "imagetools/convolution_filter.h"

namespace image_tools {

ConvolutionFilter::ConvolutionFilter() {}

ConvolutionFilter::~ConvolutionFilter() {}

ColorData ConvolutionFilter::CalculateFilteredPixel(const PixelBuffer &buffer,
                                                     int x, int y) {
  // calculate the center of the kernel
  int center = (kernel_->width()) / 2;
  double red = 0.0;
  double green = 0.0;
  double blue = 0.0;
  for (int filterX = 0; filterX < kernel_->height(); filterX++) {
    for (int filterY = 0; filterY < kernel_->width(); filterY++) {
     int pixel_loc_x = x + (filterX - center);
     int pixel_loc_y = y + (filterY - center);
     if ((pixel_loc_x >= 0 &&
          pixel_loc_x < buffer.width()) &&
         (pixel_loc_y >= 0 &&
          pixel_loc_y < buffer.height())) {
      ColorData filter_pixel = buffer.pixel(pixel_loc_x, pixel_loc_y);
      red += filter_pixel.red() * kernel_->value(filterY, filterX);
      green += filter_pixel.green() * kernel_->value(filterY, filterX);
      blue += filter_pixel.blue() * kernel_->value(filterY, filterX);
     }
    }
  }
  ColorData result = ColorData(red, green, blue);
  result.Clamp();
  return result;
}

void ConvolutionFilter::SetupFilter() {
  set_kernel_radius(static_cast<int>(slider_radius_));
  kernel_ = CreateKernel();
}

void ConvolutionFilter::CleanupFilter() {delete kernel_;}

}  // namespace image_tools
