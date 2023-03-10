#include <iostream>
using namespace std;

// The `extern` keyword tells the compiler that the count function exists,

bool is_palindrome(int integers[], int length){

    int total = 0;
    for (int i = 0; i < length / 2; i++) {
        if (integers[i] != integers[length - i - 1]) {
            total = 0;
            break;
        }
        if (integers[i] == integers[length - i - 1]) {
            total = 1;
        }

    }

    return total;
}

 int sum_array_elements(int integers[], int length){
    int sum=0;
    

    for (int i = 0; i < length; i++) {
            sum += integers[i];
        
    }

    return sum;
}

int sum_if_palindrome(int integers[], int length){
    int finalsum=0;
    bool result = is_palindrome(integers, length);
    if (result == true){
        finalsum = sum_array_elements(integers, length);
    }
    return finalsum;
}




