#include <iostream>
using namespace std;
#include "Casual.h"



Casual::Casual(int payRate){
    this->payRate = payRate;
    hoursWorked = [0,0,0,0,0];
    dayCount = 0;
}


void Casual::endWorkDay(){
    dayCount =+ 1;
    energyLevel = 100;
}

void Casual::work(int mins){

    energyLevel = energyLevel - (totalMins/2);
}

float Casual::pay(){
    payRate = hoursWorked * payRate;
    dayCount = 0;
    hoursWorked = [0,0,0,0,0];
}
