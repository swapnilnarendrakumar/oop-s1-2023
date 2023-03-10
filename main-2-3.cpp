#include <iostream>
using namespace std;

extern int sum_if_palindrome(int integers[], int length);


int main() {
    int array[5] = {4,5,6,7,8};
    int array2[5] = {1,1,0,1,1};
    int array3[5] = {1,1,0,1,3};
    int array4[5] = {1,1,0,2,1};
    int array5[5] = {3,1,0,1,3};
    //int integers[3] = {1,2,1};
    /*cout << "The number is: "<<boolalpha <<is_palindrome(array, 5) << endl;
    cout << "The number is: "<<boolalpha <<is_palindrome(array2, 5) << endl;
    cout << "The number is: "<<boolalpha <<is_palindrome(array3, 5) << endl;
    cout << "The number is: "<<boolalpha <<is_palindrome(array4, 5) << endl;
    cout << "The number is: "<<boolalpha <<is_palindrome(array5, 5) << endl;*/
    cout << "The number is: " <<sum_if_palindrome(array5, 5) << endl;
    return 0;
}