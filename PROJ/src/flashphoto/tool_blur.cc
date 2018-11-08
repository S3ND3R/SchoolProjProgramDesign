/**
This file is part of the CSCI-3081W Project Support Code, which was developed
at the University of Minnesota.

This code is to be used for student coursework.  It is not an open source
project.
Copyright (c) 2015-2018 Daniel Keefe, TAs, & Regents of the University of
Minnesota.

Original Author(s) of this File:
  Seth Johnson, 4/4/2015, University of Minnesota

Author(s) of Significant Updates/Modifications to the File:
  ...
*/

#include "flashphoto/tool_blur.h"
#include "flashphoto/mask_factory.h"


namespace image_tools {

ToolBlur::ToolBlur() {
  // TODO: Students, setup your blur filter to use a radius of 5.0 here
  std::cout << "about to set kernel_radius" << std::endl;;
  blur_filter_.set_kernel_radius(5);
  std::cout << blur_filter_.get_kernel_radius() << std::endl;;
  blur_filter_.CreateKernel();

  // the blur operation is not fast, so space the repeated applications of the
  // stamp out as far as we can get away with while still having it look good
  // 1/3 overlap is pretty good for this.
  stamp_overlap_ = 0.333;
}

ToolBlur::~ToolBlur() {
  // TODO: Students cleanup your filter here if needed.
}

FloatMatrix* ToolBlur::CreateMask(float radius) {
  return MaskFactory::CreateLinearFalloffMask(radius);
}

ColorData ToolBlur::LookupPaintColor(int x, int y) {
  // TODO: Students, here's your hook to calculate a filtered version of the
  // pixel. Use your filter to compute the blurred version of the pixel at (x,y)
  // in *buffer_ and return the new color to make this tool work.
  std::cout << "Blur about to use CFP" << std::endl;;
  ColorData filter_color = blur_filter_.CalculateFilteredPixel(*buffer_,
                                                                x, y);
  std::cout << "Blur out of to use CFP" << std::endl;;
  // Remove this:  As a placeholder, we're just returning the original pixel
  // color for now.
  return filter_color;
}


} /* namespace image_tools */
