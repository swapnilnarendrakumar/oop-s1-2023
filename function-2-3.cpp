#include <iostream>
using namespace std;

// The `extern` keyword tells the compiler that the count function exists,

bool is_palindrome(int integers[], int length){

    int total = 0;
    for (int i = 0; i <= length / 2; i++) {
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
    int sum;
    

    for (int i = 0; i < length; i++) {
            sum += integers[i];
        
    }

    return sum;
}

int sum_if_palindrome(int integers[], int length){
    int finalsum;
    bool result = is_palindrome(integers, length);
    if (result == true){
        finalsum = sum_array_elements(integers, length);
    }
    return finalsum;
}




int main() {
    int array[5] = {4,5,6,7,8};
    int array2[5] = {1,1,0,1,1};
    int array3[5] = {1,1,0,1,3};
    int array4[5] = {1,1,0,2,1};
    int array5[5] = {3,1,0,1,3};
    //int integers[3] = {1,2,1};
    cout << "The number is: "<<boolalpha <<is_palindrome(array, 5) << endl;
    cout << "The number is: "<<boolalpha <<is_palindrome(array2, 5) << endl;
    cout << "The number is: "<<boolalpha <<is_palindrome(array3, 5) << endl;
    cout << "The number is: "<<boolalpha <<is_palindrome(array4, 5) << endl;
    cout << "The number is: "<<boolalpha <<is_palindrome(array5, 5) << endl;
    cout << "The number is: " <<sum_if_palindrome(array5, 5) << endl;
    return 0;
}