#include <iostream>
using namespace std;
#include "vehicle.h"

class Car : public Vehicle {
public:
    Car(int id) : Vehicle(id) {}
    int getParkingDuration() {
        return (Vehicle::getParkingDuration() * 0.9);
    }
};

