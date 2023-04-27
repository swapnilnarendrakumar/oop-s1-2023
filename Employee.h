#include <iostream>
using namespace std;

class Employee{
private:
    int payRate;
    float energyLevel;  
    int totalMins;  
public:
    Employee();
    Employee(int payRate);  
    void takeABreak(int mins);
    virtual void work(int mins);
    virtual float pay();

};