/*
Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota

enum created by teachers and TAs of 3081W
*/

#ifndef IMAGETOOLS_CONVOLUTION_FILTER_MOTION_BLUR_H_
#define IMAGETOOLS_CONVOLUTION_FILTER_MOTION_BLUR_H_

//#include <string>

#include "imagetools/float_matrix.h"
#include "imagetools/convolution_filter.h"

namespace image_tools {

class ConvolutionFilterMotionBlur : public ConvolutionFilter {
 public:
  // Four possible motion blur directions are supported
  enum BlurDir {
    BLUR_DIR_N_S,
    BLUR_DIR_E_W,
    BLUR_DIR_NE_SW,
    BLUR_DIR_NW_SE
  };

  ConvolutionFilterMotionBlur();

  virtual ~ConvolutionFilterMotionBlur();

  // The kernel has the values 0 on all values except along a passed direction
  // where the values are all 1.
  // input: the direction_ is a string that has the direction to implement
  // return: a pointer to a float matrix &
  //         radius == ConvolutionFilter::kernel_radius_
  FloatMatrix *CreateKernel() override;

  inline BlurDir direction() {return direction_;}

  // inline void set_direction(std::string dir) {direction_ = dir;}
  inline void set_direction(BlurDir dir) {direction_ = dir;}

 private:
  BlurDir direction_;
  //std::string direction_;
};
}  // namespace image_tools
#endif  // IMAGETOOLS_CONVOLUTION_FILTER_MOTION_BLUR_H_
