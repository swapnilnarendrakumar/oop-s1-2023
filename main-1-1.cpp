#include <iostream>
using namespace std;
#include "truck.h"




int main(){
    truck truck1 = ("toyota", 12);
    truck1.get_b_code();
    truck1.get_b_name();
    cout<< "brand name:"<< truck1.b_name << endl;
    cout << "brand code:"<< truck1.b_code<< endl;


    return 0;



    
}

