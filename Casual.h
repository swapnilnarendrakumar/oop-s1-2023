#include <iostream>
using namespace std;

class Casual : public Employee{
private:
    float hoursWorked[7];                       
    int dayCount;




public:
    Casual();            
    Casual(int payRate);                                     

    void endWorkDay();
    void work(int mins);
    float pay();    

};