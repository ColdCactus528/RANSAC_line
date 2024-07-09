#pragma once

class Point {
    public: 
        Point (double,double);

        double get_coordinate_x();

        double get_coordinate_y();

        void change_coordinate_x(double);

        void change_coordinate_y(double);

        bool operator == (const Point &dot);
    private: 
        double x, y;
};