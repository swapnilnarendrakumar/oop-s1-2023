#include <iostream>
using namespace std;

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int min_element(int array[], int n);


int main() {
    int array[10] = {4,5,6,9,7,11,8,99,12,19};
    cout << "The number is: " << min_element(array, 10) << endl;
    return 0;
}