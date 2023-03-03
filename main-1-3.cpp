#include <iostream>
extern int num_count(int array[], int n, int number);



int main() {
    int array[5] = {4,5,6,7,8};
    std::cout << "The number is: " << num_count(array, 5, 7) << std::endl;
    return 0;
}