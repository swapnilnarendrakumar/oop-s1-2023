#include "truck.h"
#include <iostream>
using namespace std;
#include <string>








    /*string brand_name;
    int b_code;
    truck(brand_name, b_code);
    int get_rand_code();
    string get_brand_name();*/



    int truck::get_b_code(){
        cout<<"enter the brand code for the truck"<< endl;
        cin>>b_code;

        return b_code;
    }

    string truck::get_b_name(){
        cout<< "enter the brand name of the truck"<< endl;
        cin>>b_name;

        return b_name;

    }


    


