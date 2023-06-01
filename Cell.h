#include <cmath>
#include <tuple>
#include <random>
#include <iostream>

#ifndef CELL_H
#define CELL_H

class Cell {
protected:

    std::tuple<int, int> position;

    char type;


public:
    Cell(int x, int y, char type)
        : position(std::make_tuple(x, y)), type(type) 

        {}

    std::tuple<int, int> getPos() {


        return position;
    }

    char getType() {

        return type;


    }

    void setPos(int x, int y) {

        position = std::make_tuple(x, y);


    }

    void setType(char newType) {

        type = newType;

    }
};


#endif