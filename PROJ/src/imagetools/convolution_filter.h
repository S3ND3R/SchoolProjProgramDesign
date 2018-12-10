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
/**
@brief The base filter class, it is an abstract class that provides the base
CreateKernel method, which inheriting classes must overwrite, and the
CalculateFilteredPixel method that all convolution filters will run. */
class ConvolutionFilter: public Filter {
 public:
  ConvolutionFilter();

  virtual ~ConvolutionFilter();

  /**
  @brief Derived classes must define their own version of CreateKernel. */
  virtual FloatMatrix *CreateKernel() = 0;

  /**
  @brief Sets up the kernel used in CalculateFilteredPixel */
  void SetupFilter() override;

  /**
  @brief Cleans up memory dynamically allocated for the kernel */
  void CleanupFilter() override;

  /**
  @brief Calcultates the value of the new filtered ColorData using the
  kernel.*/
  ColorData CalculateFilteredPixel(const PixelBuffer &buffer,
                                   int x, int y) override;

  inline void set_slider_radius(float radius) {slider_radius_ = radius;}

  inline void set_kernel_radius(int radius) {kernel_radius_ = radius;}

  inline int get_kernel_radius() {return kernel_radius_;}
  /**
  @brief Hook which is set to false to change how ApplyToBuffer for the filter
  classes is run */
  inline bool can_calculate_in_place() override {return false;}

 private:
  FloatMatrix *kernel_;

  float slider_radius_;

  int kernel_radius_;
};
}  // namespace image_tools

#endif  // IMAGETOOLS_CONVOLUTION_FILTER_H_
