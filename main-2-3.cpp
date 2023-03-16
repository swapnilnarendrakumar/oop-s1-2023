
#include <iostream>
using namespace std;

extern int palindrome_sum(int integers[], int length);
extern bool is_array_palindrome(int integers[], int length);
extern int sum_integers(int integers[], int length);



int main(){

    int integers[6] = {1,2,3,3,2,1};
    //cout << is_array_palindrome(integers, 6);
    cout << palindrome_sum(integers, 6);



}