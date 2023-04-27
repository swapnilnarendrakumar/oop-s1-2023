#include <iostream>
using namespace std;
#include "Casual.h"



Casual::Casual(int payRate){
    this->payRate = payRate;
    float hoursWorked = [0,0,0,0,0];
    int dayCount = 0;
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
    int dayCount = 0;
    float hoursWorked = [0,0,0,0,0];
}
