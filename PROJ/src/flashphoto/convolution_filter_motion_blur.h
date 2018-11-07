/*
Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota

enum created by teachers and TAs of 3081W
*/

#ifndef CONVOLUTION_FILTER_MOTION_BLUR_H
#define CONVOLUTION_FILTER_MOTION_BLUR_H

#include <string>

#include "flashphoto/float_matrix.h"
#include "flashphoto/convolution_filter.h"

namespace image_tools {

 class ConvolutionFilterMotionBlur : public ConvolutionFilter {
  public:
   FloatMatrix *CreateKernel() override;

   /// Four possible motion blur directions are supported
  // enum MBlurDir { MBLUR_DIR_N_S, MBLUR_DIR_E_W, MBLUR_DIR_NE_SW,
  //    MBLUR_DIR_NW_SE };

   inline void set_direction(std::string dir) {direction_ = dir;}

  private:
    std::string direction_;
 };
}  // namespace image_tools
#endif  // CONVOLUTION_FILTER_MOTION_BLUR_H
