#include <iostream>
using namespace std;

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int two_five_nine(int array[], int n);


int main() {
    int array[5] = {4,5,6,7,8};
    cout << "The number is: " << two_five_nine(array, 5) << endl;
    return 0;
}