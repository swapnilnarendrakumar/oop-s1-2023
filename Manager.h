#include <iostream>
using namespace std;

class Manager : public Employee{
    Manager();            
    Manager(int payRate);                // Create a Manager with a payRate
 
    float hoursWorked;                     
    int daysWorked;

    void work(int mins);
    float pay();

};