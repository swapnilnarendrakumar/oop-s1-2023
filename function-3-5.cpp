#include <iostream>



int sum_even(double array[], int n){
    int total = 0;
 

    for(int i=0;i<n;i=i+2){ 
           total += (array[i]);
    }

    return total;
}


/*int main() {
    double array[5] = {4,5,6,7,8};
    std::cout << "The number is: " << sum_even (array, 5) << std::endl;
    return 0;
}
*/







