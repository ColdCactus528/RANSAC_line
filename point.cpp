#include "point.h"

Point::Point(double a, double b) {
    x = a;
    y = b;
};

double Point::get_coordinate_x() {
    return x;
};

double Point::get_coordinate_y() {
    return y;
};

void Point::change_coordinate_x(double a) {
    x = a;
};

void Point::change_coordinate_y(double a) {
    y = a;
};

bool Point::operator == (const Point &dot) {
    if (x == dot.x && y == dot.y)
      return true;
  return false;
};
