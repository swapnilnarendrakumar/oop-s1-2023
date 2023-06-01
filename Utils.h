#include <iostream>
#include <tuple>
#include <random>
#include <cmath>

using namespace std;

#ifndef UTILS_H
#define UTILS_H




class Utils {
public:
    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
        std::random_device rd;

        std::mt19937 gen(rd());

        std::uniform_int_distribution<int> distX(0, gridWidth - 1);

        std::uniform_int_distribution<int> distY(0, gridHeight - 1);


        int x = distX(gen);

        int y = distY(gen);

        return std::make_tuple(x, y);
    }
   
    static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2) {
        int p_1, q_1, p_2, q_2;
        std::tie(p_1, q_1) = pos1;
        std::tie(p_2, q_2) = pos2;


        double d_x = p_2 - p_1;
        double d_y = q_2 - q_1;

        return sqrt(d_x * d_x + d_y * d_y);

    }
};




#endif

