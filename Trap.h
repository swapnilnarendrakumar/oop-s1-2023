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
    Trap(int x, int y): Cell(x, y, 'T'), active(true) {}

    bool isActive() {
        return active;
    }

    void apply(Cell& cell) {
        if (active) {
            cell.setType('T');


            active = false;

           
        }
    }
};


#endif




