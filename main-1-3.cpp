#include <iostream>
using namespace std;
#include "Person.h"


extern PersonList deepCopyPersonList(PersonList pl);






int main(){
    PersonList pl;
    int i;
    int n;



    pl.people = new Person[n];

    pl.numPeople = n;

    for (i = 0; i < n; i++){
        pl.people[i].name = "Jane Doe";
        pl.people[i].age = 1;

    }




    deepCopyPersonList(pl);

    return 0;


    //cout << hello;

}
