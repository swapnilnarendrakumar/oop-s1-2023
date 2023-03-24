#include <iostream>
using namespace std;
#include "Person.h"


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





    shallowCopyPersonList(pl);

    return 0;

}
