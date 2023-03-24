#include <iostream>
using namespace std;
#include "person.h"


PersonList shallowCopyPersonList(PersonList pl){

    PersonList copy = pl;

    return copy;
    

}