#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
//extern  int array_sum(int array[], int n);
int array_sum(int array[], int n){
    int total = 0;
    for (int i = 0; i < n; i++) {
            total += array[i];
    }

    return total;
}



/*
int main() {
    int array[5] = {4,5,6,7,8};
    std::cout << "The number is: " << count(array, 5) << std::endl;
    return 0;
}*/