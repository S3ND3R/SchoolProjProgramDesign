/**
Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota

enum created by teachers and TAs of 3081W
*/

#ifndef IMAGETOOLS_CONVOLUTION_FILTER_MOTION_BLUR_H_
#define IMAGETOOLS_CONVOLUTION_FILTER_MOTION_BLUR_H_

#include "imagetools/float_matrix.h"
#include "imagetools/convolution_filter.h"

namespace image_tools {

/**
@brief This convolution motion blur filter applies blur in different enumerated
Blurdir directions to the current PixelBuffer*/
class ConvolutionFilterMotionBlur : public ConvolutionFilter {
 public:
  /** @brief Four possible motion blur directions are supported */
  enum BlurDir {
    BLUR_DIR_N_S,
    BLUR_DIR_E_W,
    BLUR_DIR_NE_SW,
    BLUR_DIR_NW_SE
  };

  ConvolutionFilterMotionBlur();

  virtual ~ConvolutionFilterMotionBlur();

  /**
  @brief All kernel values are 0 except along the passed BlurDir direction,
  where all values are 1.*/
  FloatMatrix *CreateKernel() override;

  inline BlurDir direction() {return direction_;}

  inline void set_direction(BlurDir dir) {direction_ = dir;}

 private:
  BlurDir direction_;
};
}  // namespace image_tools
#endif  // IMAGETOOLS_CONVOLUTION_FILTER_MOTION_BLUR_H_
