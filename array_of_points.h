#pragma once
#include "point.h"
#include "vector"
#include "string"

class Arr_of_points {
    public:
        Arr_of_points(std::string);

        void write_dots();

        void add_point(Point);

        void delete_point(Point);

    private:
    std::vector<Point> arr;
};