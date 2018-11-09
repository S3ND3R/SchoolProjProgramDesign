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
  FloatMatrix *CreateKernel() override;

  inline void set_direction(std::string dir) {direction_ = dir;}

 private:
  std::string direction_;
};
}  // namespace image_tools
#endif  // FLASHPHOTO_CONVOLUTION_FILTER_MOTION_BLUR_H_
