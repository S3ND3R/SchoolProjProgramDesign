/*
Copyright (c) 2018

Original Author(s) of this File:
  Warren Weber, 10/26/18, University of Minnesota
*/

#ifndef IMAGETOOLS_FILTER_H_
#define IMAGETOOLS_FILTER_H_

#include "imagetools/pixel_buffer.h"
#include "imagetools/color_data.h"

namespace image_tools {
/**
@brief The base class for filtering, an abstract class. Filter has the
ApplyToBuffer method that applies the filter to the passed PixelBuffer, and the
CalculateFilteredPixel method that must be overwritten by all derived
classes. */
class Filter {
 public:
  Filter();

  virtual ~Filter();

  /**
  @brief Template that defines the key recipe for filtering. */
  void ApplyToBuffer(PixelBuffer *buffer);

  /**
  @brief Sets up the filter, if needed. */
  virtual void SetupFilter();

  /**
  @brief Derived classes must define CalculateFilteredPixel. */
  virtual ColorData CalculateFilteredPixel(const PixelBuffer &buffer,
                                           int x, int y) = 0;

  /**
  @brief Cleans up the filter, if needed. */
  virtual void CleanupFilter();

  /**
  @brief Hook method that alters how the ApplyToBuffer is implemented based
  on whether pixel values can be calculated in place/ Automatically set to
  true. */
  virtual bool  can_calculate_in_place() {return true;}
};

}  // namespace image_tools

#endif  // IMAGETOOLS_FILTER_H_
