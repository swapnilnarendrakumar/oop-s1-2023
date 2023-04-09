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



int main() {
    int Cars, Buses, Motorbikes;
    cout << "Enter number of cars: ";
    cin >> Cars;
    cout << "Enter number of buses: ";
    cin >> Buses;
    cout << "Enter number of motorbikes: ";
    cin >> Motorbikes;

    const int totalVehicles = Cars + Buses + Motorbikes;
    Vehicle* vehicles[totalVehicles];
    int vehicleCount = 0;

    for (int i = 0; i < Cars; i++) {
        int id;
        cout << "Enter car ID: ";
        cin >> id;
        vehicles[vehicleCount++] = new Car(id);
    }
    for (int i = 0; i < Buses; i++) {
        int id;
        cout << "Enter bus ID: ";
        cin >> id;
        vehicles[vehicleCount++] = new Bus(id);
    }
    for (int i = 0; i < Motorbikes; i++) {
        int id;
        cout << "Enter motorbike ID: ";
        cin >> id;
        vehicles[vehicleCount++] = new Motorbike(id);
    }

    for (int i = 0; i < totalVehicles; i++) {
        cout << "Vehicle " << vehicles[i]->getID() << " parked for "
                  << vehicles[i]->getParkingDuration() << " seconds\n";
        delete vehicles[i];
    }

    return 0;
}