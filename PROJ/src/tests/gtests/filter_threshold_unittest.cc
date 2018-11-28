// Copyright (c) 2018, Warren Weber, University of Minnesota.

#include <iostream>
#include "gtest/gtest.h"
#include "imagetools/filter_threshold.h"

using image_tools::FilterThreshold;

class FilterThresholdTest : public ::testing::Test {
  void SetUp() override {}

 protected:
  FilterThreshold threshold_filter;
};

TEST_F(FilterThresholdTest, SetsCorrectThreshold) {
  threshold_filter.set_threshold(1.0);

  EXPECT_EQ(threshold_filter.threshold(), 1.0);
}
