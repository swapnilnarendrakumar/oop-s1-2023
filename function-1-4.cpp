
#include <iostream>


extern int sum_two_arrays(int array[], int secondarray[], int n);
int sum_two_arrays(int array[], int secondarray[], int n){
    int total = 0;
    int total2 = 0;
    int total3 = 0;

    for (int i = 0; i < n; i++) {
            total += array[i];
    }

    for (int i = 0; i < n; i++) {
            total2 += secondarray[i];
    }
    
    total3 = total + total2;



    return total3;
}


int main() {
    int array[5] = {4,5,6,7,8};
    int secondarray[5] = {1,2,3,4,5};
    std::cout << "The number is: " << sum_two_arrays(array, secondarray, 5) << std::endl;
    return 0;
}