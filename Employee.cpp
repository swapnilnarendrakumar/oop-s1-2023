#include <iostream>
using namespace std;
#include "Employee.h"

/*Employee(){
    float energyLevel = 100;
    int totalMins = 0;
}*/

Employee(){
    //nothing
}


Employee::Employee(int payRate){
    this->payRate = payRate;
    float energyLevel = 100.0f;
    int totalMins = 0;
}


void Employee::takeABreak(int mins){

    float energyLevel = energyLevel + (mins * 0.02f);
}

void Employee::work(int mins){

    energyLevel = energyLevel - totalMins;
}

float Employee::pay(){
    return totalMins * 0.5f;
}


// void appliance::set_powerRating(int powerRating) {
