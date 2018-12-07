/**
@file filter_channels.h
Copyright (c) 2018

OriginaApplyToBufferl Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#ifndef IMAGETOOLS_FILTER_CHANNELS_H_
#define IMAGETOOLS_FILTER_CHANNELS_H_

#include "imagetools/pixel_buffer.h"
#include "imagetools/color_data.h"
#include "imagetools/filter.h"

namespace image_tools {
/**
@brief This channels filter adjusts the individual color channels in the current
PixelBuffer*/
class FilterChannels : public Filter {
 public:
  FilterChannels();

  virtual ~FilterChannels();

  /**@brief calculates the color data for a pixel on each individual RGB
  channel by a scale value*/
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
#endif  // IMAGETOOLS_FILTER_CHANNELS_H_
