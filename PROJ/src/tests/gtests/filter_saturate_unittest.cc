// Copyright (c) 2018, Warren Weber, University of Minnesota.

#include <iostream>
#include "gtest/gtest.h"
#include "imagetools/filter_saturate.h"

using image_tools::FilterSaturate;

class FilterSaturateTest : public ::testing::Test {
  void SetUp() override {}

 protected:
  FilterSaturate sat_filter;
};

TEST_F(FilterSaturateTest, SetsCorrectSaturationScale) {
  sat_filter.set_saturation_scale(5.0);

  EXPECT_EQ(sat_filter.get_saturation_scale(), 5.0);
}
