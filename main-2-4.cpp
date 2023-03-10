#include <iostream>
using namespace std;

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
int array_min(int integers[], int length){


    int total = integers[0];
 

    for(int i=0; i<length; i++){ 
        if (integers[i]<total){
            total = integers[i];
        }

    
    }

    return total;
}

int array_max(int integers[], int length){


    int total = integers[0];
 

    for(int i=0; i<length; i++){ 
        if (integers[i]>total){
            total = integers[i];
        }

    
    }

    return total;
}

int sum_min_max(int integers[], int length){
    int finalsum = 0;
    //int u = array_min(integers, length);
    //int y = array_maxt(integers, length);
    finalsum = array_max(integers, length) +  array_min(integers, length);
    return finalsum;
}

int main() {
    int letters[7] = {1,2,3,4,5,7,8};

    /*for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
         cout << letters[i][j] * 4 << "\n";
        }
    }*/
    
    cout << sum_min_max(letters, 7);


   
}
