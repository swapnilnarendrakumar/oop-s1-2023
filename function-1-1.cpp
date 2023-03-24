#include <iostream>
using namespace std;
#include "Person.h"

Person* createPersonArray(int n){

    Person* array = new Person[n];



    //struct Person Per[n];
    Person arr;
    int i;
    arr.name = "John Doe";
    arr.age = 0;

    for (i = 0; i < n; i++){
        array[i] = arr;
        
    }

    return array;
}
