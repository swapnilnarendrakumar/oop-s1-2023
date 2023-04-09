#include <iostream>
using namespace std;
#include "motorbike.h"


int main() {
    int Motorbikes;
   
    cout << "Enter number of motorbikes: ";
    cin >> Motorbikes;

    const int totalVehicles = Motorbikes;
    
    Vehicle* vehicles[totalVehicles];
    int vehicleCount = 0;
 
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


/*
#include <iostream>
using namespace std;
#include "motorbike.h"


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
    /* 
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
*/