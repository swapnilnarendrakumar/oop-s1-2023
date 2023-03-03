#include <iostream>
using namespace std;

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else

 double array_mean(int array[], int n){
    int total = 0;


    for (int i = 0; i < n; i++) {
            total += array[i];
        }
    double mean = total / n;
    

    return mean;
}




