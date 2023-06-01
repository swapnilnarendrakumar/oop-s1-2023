#include <iostream>
#include <cmath>
using namespace std;
#include <random>
#include <tuple>
#include "Cell.h"

#ifndef CHARACTER_H
#define CHARACTER_H




class Character : public Cell {
public:
    Character(int x, int y): Cell(x, y, 'C') {}

    void move(int dx, int dy) {
        int x, y;
        tie(x, y) = getPos();
        setPos(x + dx, y + dy);
       
    }
};


#endif