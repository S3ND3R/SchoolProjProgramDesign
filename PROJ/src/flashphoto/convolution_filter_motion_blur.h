/*
Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota

enum created by teachers and TAs of 3081W
*/

#ifndef FLASHPHOTO_CONVOLUTION_FILTER_MOTION_BLUR_H_
#define FLASHPHOTO_CONVOLUTION_FILTER_MOTION_BLUR_H_

#include <string>

#include "flashphoto/float_matrix.h"
#include "flashphoto/convolution_filter.h"

namespace image_tools {

class ConvolutionFilterMotionBlur : public ConvolutionFilter {
 public:
  ConvolutionFilterMotionBlur();

  virtual ~ConvolutionFilterMotionBlur();

  // The kernel has the values 0 on all values except along a passed direction
  // where the values are all 1.
  // input: the direction_ is a string that has the direction to implement
  FloatMatrix *CreateKernel() override;

  inline void set_direction(std::string dir) {direction_ = dir;}

 private:
  std::string direction_;
};
}  // namespace image_tools
#endif  // FLASHPHOTO_CONVOLUTION_FILTER_MOTION_BLUR_H_
