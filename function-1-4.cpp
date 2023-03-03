
#include <iostream>



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

