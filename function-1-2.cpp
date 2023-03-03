#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern double count(int[], int);

double count(int array[], int n){
    int total = 0;


    for (int i = 0; i < n; i++) {
            total += array[i];
        }
    double mean = total / n;
    

    return mean;
}




int main() {
    int array[5] = {1, 2, 3, 4, 5};
    std::cout << "The number is: " << count(array, 5) << std::endl;
    return 0;
}