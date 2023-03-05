#include <iostream>
using namespace std;

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int max_element(int array[], int n);


int main() {
    int array[7] = {4,5,6,9,7,11,8};
    cout << "The number is: " << max_element(array, 7) << endl;
    return 0;
}