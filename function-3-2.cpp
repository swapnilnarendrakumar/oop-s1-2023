
#include <iostream>
using namespace std;

extern int median_array(int array[], int n);
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


int main() {
    int array[7] = {4,5,6,7,8,9,10};
    cout << "The number is: " << median_array(array, 7) << endl;
}

narendra grimace
