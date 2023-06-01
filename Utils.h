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
        int x1, y1, x2, y2;
        std::tie(x1, y1) = pos1;
        std::tie(x2, y2) = pos2;

        double dx = x2 - x1;
        double dy = y2 - y1;

        return std::sqrt(dx * dx + dy * dy);
    }
};


class MyEffect : public Effect {
public:
    void apply(Cell& cell) {
        std::cout << "Applying effect to cell at position (" <<std::get<0>(cell.getPos()) << ", "
                  << std::get<1>(cell.getPos()) << ")\n";
    }
};


#endif

