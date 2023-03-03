#include <iostream>
using namespace std;


// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern  double array_mean(int array[], int n);



int main() {
    int array[5] = {4,5,6,7,8};
    cout << "The number is: " << array_mean(array, 5) << endl;
    return 0;
}