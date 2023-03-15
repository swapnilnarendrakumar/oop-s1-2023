#include <iostream>
using namespace std;


extern float add_op(float left, float right);
extern float subtract_op(float left, float right);
extern float arithmetic_ops(float left, float right, std::string op);

int main(){

    cout << arithmetic_ops(1.8, 2.9, "add_op");



}