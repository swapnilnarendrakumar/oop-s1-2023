#include <iostream>
using namespace std;
#include "Person.h"
#include <string.h>



PersonList shallowCopyPersonList(PersonList pl){

    PersonList copy = pl;

    return copy;


}