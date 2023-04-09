#include <iostream>
using namespace std;
#include "vehicle.h"



class Motorbike : public Vehicle {
public:
    Motorbike(int id) : Vehicle(id) {}
    int getParkingDuration() {
        return (Vehicle::getParkingDuration() * 0.85);
    }
};
