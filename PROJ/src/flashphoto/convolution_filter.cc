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

  int middle = (kernel_->width() - 1) / 2;
  double red = 0.0;
  double green = 0.0;
  double blue = 0.0;
  for (int filterY = 0; filterY < kernel_->height(); filterY++) {
   for (int filterX = 0; filterX < kernel_->width(); filterX++) {
     int pixel_loc_x = x + (filterX - middle);
     int pixel_loc_y = y + (filterY - middle);
     if ((pixel_loc_x >= 0 ||
          pixel_loc_x <= buffer.width() - 1) ||
         (pixel_loc_y >= 0 ||
          pixel_loc_y <= buffer.height() - 1)) {
      // error occurs here
      ColorData filter_pixel = buffer.pixel(pixel_loc_x, pixel_loc_y);
      red += filter_pixel.red() * kernel_->value(filterY, filterX);
      green += filter_pixel.green() * kernel_->value(filterY, filterX);
      blue += filter_pixel.blue() * kernel_->value(filterY, filterX);
    }
   }
  }
  ColorData result = ColorData(red,green,blue);
  result.Clamp();
  return result;
 }

 void ConvolutionFilter::SetupFilter() {
  set_kernel_radius((int) slider_radius_);
  kernel_ = CreateKernel();
 }
 void ConvolutionFilter::CleanupFilter() {delete kernel_;}
}  // namespace image_tools
