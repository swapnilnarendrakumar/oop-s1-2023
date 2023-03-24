#include <iostream>
using namespace std;
#include <string.h>
#include "Person.h"



PersonList createPersonList(int n){
    PersonList array;
    array.people = new Person[n];
    array.numPeople = n;

    for (int i = 0; i < n; i++){
        array.people[i].name = "Jane Doe";
        array.people[i].age = 1;        
    }

    return array;
    

}


