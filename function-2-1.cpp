#include <iostream>
using namespace std;

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
int min_element(int array[], int n){


    int total = array[0];
 

    for(int i=0; i<n; i++){ 
        if (array[i]<total){
            total = array[i];
        }

    
    }

    return total;
}
