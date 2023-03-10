
#include <iostream>
using namespace std;



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