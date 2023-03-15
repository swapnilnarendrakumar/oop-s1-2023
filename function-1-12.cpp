#include <iostream>
using namespace std;


int size_of_variable_star_arr(){
    int x = 0;
    int *arr = new int[3];

    x = sizeof(arr);
    delete arr;

    return x;
}