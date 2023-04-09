#include <iostream>
using namespace std;
#include "vehicle.h"

#ifndef bus_h
#define bus_H



class Bus : public Vehicle {
public:
    Bus(int id) : Vehicle(id) {}
    int getParkingDuration() {
        return (Vehicle::getParkingDuration() * 0.75);
    }
};

#endif
