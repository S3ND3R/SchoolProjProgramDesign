/*
Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#ifndef IMAGETOOLS_CONVOLUTION_FILTER_H_
#define IMAGETOOLS_CONVOLUTION_FILTER_H_

#include "imagetools/float_matrix.h"
#include "imagetools/pixel_buffer.h"
#include "imagetools/color_data.h"
#include "imagetools/filter.h"

namespace image_tools {

class ConvolutionFilter: public Filter {
 public:
  ConvolutionFilter();

  virtual ~ConvolutionFilter();

  // derived classes must define their version of CreateKernel
  virtual FloatMatrix *CreateKernel() = 0;

  // Sets up the kernel used in CalculateFilteredPixel
  void SetupFilter() override;

  // Cleans up memory dynamically allocated for the kernel
  void CleanupFilter() override;

  // Calcultates the value of the new filtered color using the kernel.
  ColorData CalculateFilteredPixel(const PixelBuffer &buffer,
                                   int x, int y) override;

  inline void set_slider_radius(float radius) {slider_radius_ = radius;}

  inline void set_kernel_radius(int radius) {kernel_radius_ = radius;}

  inline int get_kernel_radius() {return kernel_radius_;}

  inline bool can_calculate_in_place() override {return false;}

 private:
  FloatMatrix *kernel_;

  float slider_radius_;

  int kernel_radius_;
};
}  // namespace image_tools

#endif  // IMAGETOOLS_CONVOLUTION_FILTER_H_
