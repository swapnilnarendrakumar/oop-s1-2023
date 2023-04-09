#include <iostream>
using namespace std;


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



