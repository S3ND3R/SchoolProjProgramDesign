/*
Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

//#include <string>
#include "imagetools/float_matrix.h"
#include "imagetools/convolution_filter_motion_blur.h"

namespace image_tools {
ConvolutionFilterMotionBlur::ConvolutionFilterMotionBlur() {}

ConvolutionFilterMotionBlur::~ConvolutionFilterMotionBlur() {}

// FloatMatrix *ConvolutionFilterMotionBlur::CreateKernel() {
//   int radius = get_kernel_radius();
//   FloatMatrix *motion_kernel = new FloatMatrix(radius);
//   int middle = (motion_kernel->width() - 1) / 2;
//
//   if (direction_ == "North/South") {
//     for (int x = 0; x < motion_kernel->height(); x++) {
//      for (int y = 0; y < motion_kernel->width(); y++) {
//       if (x == middle)
//        motion_kernel->set_value(x, y, 1.0);
//       else
//        motion_kernel->set_value(x, y, 0.0);
//      }
//     }
//   }
//   if (direction_ == "East/West") {
//     for (int x = 0; x < motion_kernel->height(); x++) {
//      for (int y = 0; y < motion_kernel->width(); y++) {
//       if (y == middle)
//        motion_kernel->set_value(x, y, 1.0);
//       else
//        motion_kernel->set_value(x, y, 0.0);
//      }
//     }
//   }
//   if (direction_ == "Northeast/Southwest") {
//     for (int x = 0; x < motion_kernel->height(); x++) {
//      for (int y = 0; y < motion_kernel->width(); y++) {
//       if (x + y == motion_kernel->width() - 1)
//        motion_kernel->set_value(x, y, 1.0);
//       else
//        motion_kernel->set_value(x, y, 0.0);
//      }
//     }
//   }
//   if (direction_ == "Northwest/Southeast") {
//     for (int x = 0; x < motion_kernel->height(); x++) {
//      for (int y = 0; y < motion_kernel->width(); y++) {
//       if (x == y)
//        motion_kernel->set_value(x, y, 1.0);
//       else
//        motion_kernel->set_value(x, y, 0.0);
//      }
//     }
//   }
  switch (direction_) {
    case MBLUR_DIR_N_S:
     for (int x = 0; x < motion_kernel->height(); x++) {
      for (int y = 0; y < motion_kernel->width(); y++) {
       if(x == middle)
        motion_kernel->set_value(x,y,1.0);
       else
        motion_kernel->set_value(x,y,0.0);
      }
     }
     break;
    case MBLUR_DIR_E_W:
     for (int x = 0; x < motion_kernel->height(); x++) {
      for (int y = 0; y < motion_kernel->width(); y++) {
       if(y == middle)
        motion_kernel->set_value(x,y,1.0);
       else
        motion_kernel->set_value(x,y,0.0);
      }
     }
     break;
    case MBLUR_DIR_NE_SW:
     for (int x = 0; x < motion_kernel->height(); x++) {
      for (int y = 0; y < motion_kernel->width(); y++) {
       if(x + y == motion_kernel->width() - 1)
        motion_kernel->set_value(x,y,1.0);
       elsex == y
        motion_kernel->set_value(x,y,0.0);
      }
     }
     break;
    case MBLUR_DIR_NW_SE:
     for (int x = 0; x < motion_kernel->height(); x++) {
      for (int y = 0; y < motion_kernel->width(); y++) {
       if(x == y)
        motion_kernel->set_value(x,y,1.0);
       else
        motion_kernel->set_value(x,y,0.0);
      }
     }
    break;
  }

  motion_kernel->Normalize();
  return motion_kernel;
}

}  // namespace image_tools
