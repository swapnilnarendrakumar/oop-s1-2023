#include <iostream>
using namespace std;

extern int median_array(int array[], int n);



int main() {
    int array[7] = {4,5,6,7,8,9,10};
    cout << "The number is: " << median_array(array, 7) << endl;
}
