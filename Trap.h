#include <iostream>
#include <cmath>
#include <random>
#include <tuple>
using namespace std;


#ifndef TRAP_H
#define TRAP_H




class Trap : public Cell, public Effect {
private:
    bool active;
public:
    Trap(int x, int y)
        : Cell(x, y, 'T'), active(true) {}

    bool isActive() {
        return active;
    }

    void apply(Cell& cell) {
        if (active) {
            cell.setType('T');
            active = false;
            std::cout << "Trap applied to cell at position (" << std::get<0>(cell.getPos()) << ", "
                      << std::get<1>(cell.getPos()) << ")\n";
        }
    }
};


#endif




