#include "array_of_points.h"
#include "point.h"
#include "iostream"

int main () {
    Point dot(2.5,6.8);
    std::cout << dot.get_coordinate_x() << ", " << dot.get_coordinate_y() << "\n";
}