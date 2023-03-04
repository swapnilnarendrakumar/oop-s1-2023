#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern  int sume(int array[], int n);
int sume(int array[], int n){
    int total = 0;
    /*for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            total += 1;
        }
    }*/

    for(int i=0;i<n;i=i+2){ // use <
           total += (array[i]);
    }

    return total;
}







