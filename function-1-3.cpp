#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else

int num_count(int array[], int n, int number){
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] == number) {
            total += 1;
        }
    }

    return total;
}




