#include <iostream>
using namespace std;

float add_op(float left, float right){
    float sum;
    float *ptr1, *ptr2;
    ptr1 = &left; //assigning an address to pointer
    ptr2 = &right;
    sum = *ptr1 + *ptr2;
    return sum;

}
float subtract_op(float left, float right){
    float subtraction;
    float *ptr1, *ptr2;
    ptr1 = &left; //assigning an address to pointer
    ptr2 = &right;
    subtraction = *ptr1 - *ptr2;
    return subtraction;

}

float arithmetic_ops(float left, float right, std::string op){
    float sun, sub;
    if (op == '+'){
        sun = left + right;


    }
    if (op == '-'){
        sub = left - right;
    }
}
