/*
Copyright (c) 2018

OriginaApplyToBufferl Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#ifndef FLASHPHOTO_FILTER_CHANNELS_H_
#define FLASHPHOTO_FILTER_CHANNELS_H_

#include "flashphoto/pixel_buffer.h"
#include "flashphoto/color_data.h"
#include "flashphoto/filter.h"

namespace image_tools {

class FilterChannels : public Filter {
public:
 // calculates the colordata for a pixel if the RGB are individually adjusted
 // for some scale
 ColorData CalculateFilteredPixel(const PixelBuffer &buffer, int x,
                                  int y) override;

 inline void set_rgb_scale(float r_s, float g_s, float b_s ) {
  r_scale_ = r_s;
  g_scale_ = g_s;
  b_scale_ = b_s;
 }

private:
  float r_scale_ = 0.0;
  float g_scale_ = 0.0;
  float b_scale_ = 0.0;
};
}  // namespace image_tools
#endif  // FLASHPHOTO_FILTER_CHANNELS_H_
