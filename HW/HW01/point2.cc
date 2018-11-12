//  Copyright 2018 Warren Weber
#include "HW01/point2.h"
#include <math.h>  //  sqrt, pow
#include <iostream>

Point2::Point2() {x_coord = 0.0; y_coord = 0.0;}

Point2::Point2(float x, float y) {x_coord = x; y_coord = y;}

float Point2::DistanceBetween(Point2 point) {
  //  uses the distance fromula to calculate the distance
  return sqrt( pow((x_coord - point.get_x_coord()), 2.0)
             + pow((y_coord - point.get_y_coord()), 2.0));
}

float Point2::get_x_coord() {return x_coord;}

float Point2::get_y_coord() {return y_coord;}
