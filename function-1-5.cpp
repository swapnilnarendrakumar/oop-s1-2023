#include <iostream>
using namespace std;

int size_of_array_arr(){
    int *arr = new int[7];

    return sizeof(arr)/sizeof(*arr);

}

