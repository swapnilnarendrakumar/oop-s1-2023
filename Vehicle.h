#include <iostream>
using namespace std;


#ifndef bus_h
#define bus_H

class Vehicle {
private:
    std::time_t timeofEntry;
    int ID;
public:
    Vehicle(int id) : ID(id) {
        timeofEntry = std::time(nullptr);
    }
    int getID() const {
        return ID;
    }
    int getParkingDuration() const {
        std::time_t now = std::time(nullptr);
        return now - timeofEntry;
    }
};



class Car : public Vehicle {
public:
    Car(int id) : Vehicle(id) {}
    int getParkingDuration() {
        return (Vehicle::getParkingDuration() * 0.9);
    }
};


class Bus : public Vehicle {
public:
    Bus(int id) : Vehicle(id) {}
    int getParkingDuration() {
        return (Vehicle::getParkingDuration() * 0.75);
    }
};

class Motorbike : public Vehicle {
public:
    Motorbike(int id) : Vehicle(id) {}
    int getParkingDuration() {
        return (Vehicle::getParkingDuration() * 0.85);
    }
};



#endif


