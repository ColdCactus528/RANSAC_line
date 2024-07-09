#include "algorithm"
#include "array_of_points.h"
#include "iostream"
#include "fstream"
#include "stdlib.h"


Arr_of_points::Arr_of_points(std::string path){
    std::string getting_line;
    std::ifstream File(path); 
        while(getline(File, getting_line)) {
            double x,y;
            std::cout << getting_line << "\n";
            getting_line.erase(std::remove_if(getting_line.begin(), getting_line.end(), isspace), getting_line.end());
            std::cout << getting_line << "\n";

            int flag = getting_line.find(",");
            std::string s = getting_line.substr(0, flag);
            x = strtod(s.c_str(), nullptr);

            getting_line.erase(getting_line.begin(), getting_line.begin()+flag);
            std::cout << getting_line << "\n";

            flag = getting_line.find(",");
            s = getting_line.substr(0, flag);
            y = strtod(s.c_str(), nullptr);

            Point dot(x,y);
            arr.push_back(dot);
        }
    File.close();
}

void Arr_of_points::write_dots() {
    std::ofstream out;
    for (int i=0; i < arr.size(); ++i) {
        double x = arr[i].get_coordinate_x();
        double y = arr[i].get_coordinate_y();
        std::string s = std::to_string(x) + "," + std::to_string(y) + "\n";
        out << s;
        out.close();
    }
}

void Arr_of_points::add_point(Point dot) {
    arr.push_back(dot);
}

void Arr_of_points::delete_point(Point dot) {
    for (int i=0; i < arr.size(); ++i) {
        if(arr[i] == dot)
            arr.erase(arr.begin() + i);
    }
}
