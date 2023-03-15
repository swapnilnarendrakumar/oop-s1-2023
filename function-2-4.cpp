#include <iostream>
using namespace std;

float multiply_op(float left, float right){
    float x, y, product;
    float *ptr1, *ptr2;
    ptr1 = &x; //assigning an address to pointer
    ptr2 = &y;
    product = *ptr1 * *ptr2;
    return product;
}

float add_op(float left, float right){
    float x, y, sum;
    float *ptr1, *ptr2;
    ptr1 = &x; //assigning an address to pointer
    ptr2 = &y;
    sum = *ptr1 + *ptr2;
    return sum;

}
float subtract_op(float left, float right){
    float x, y, subtraction;
    float *ptr1, *ptr2;
    ptr1 = &x; //assigning an address to pointer
    ptr2 = &y;
    subtraction = *ptr1 - *ptr2;
    return subtraction;

}

