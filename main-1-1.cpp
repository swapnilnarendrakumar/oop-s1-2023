#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int array_sum(int array[], int n);
extern double array_mean(int array[], int n);
extern int num_count(int array[], int n, int number);
extern int sum_two_arrays(int array[], int secondarray[], int n);
extern int count_evens(int number);
extern void two_five_nine(int array[], int n);
extern bool is_ascending(int array[], int n);
extern  bool is_descending(int array[], int n);



int main() {
    int array[5] = {4,5,6,7,8};
    std::cout << "The number is: " << count(array, 5) << std::endl;
    return 0;
}