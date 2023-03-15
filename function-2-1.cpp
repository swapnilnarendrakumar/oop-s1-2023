#include <iostream>
using namespace std;

float add_op(float left, float right){
    float sum;
    sum = left + right;
    return sum;

}
float subtract_op(float left, float right){
    float subtraction;
    subtraction = left - right;
    return subtraction;

}

float arithmetic_ops(float left, float right, std::string op){
        

    if (op == "+"){
         cout <<  left + right;
    }
    if (op == "-"){
         cout << left - right;
    }

    return sum, subtraction;



   
}
