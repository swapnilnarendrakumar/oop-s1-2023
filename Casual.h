#include <iostream>
using namespace std;

class Casual{
    Casual();            
    Casual(int payRate);              
  
    float hoursWorked[7];                       
    int dayCount;                       

    void endWorkDay();
    void work(int mins);
    float pay();    

};