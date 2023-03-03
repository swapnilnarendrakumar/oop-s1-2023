
#include <iostream>
using namespace std;

int median_array(int array[], int n){
    int y = 0;
    int x = 0;
    int median = 0;




    if (n % 2 != 0){

        x = (n +1)/2;
        y = array[x-1];
        median = y;

    } 

    else{
        median = 0;
    }
    
    return median;
            
    
   
   
}


