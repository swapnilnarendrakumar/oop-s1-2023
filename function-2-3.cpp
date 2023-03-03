#include <iostream>
using namespace std;

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int count(int[], int);
int count(int array[], int n){
    int total = 0;
    int total2 = 0;
    int total3 = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] == 2) {
            total += 1;
        }
    }

    for (int i = 0; i < n; i++) {
        if (array[i] == 5) {
            total2 += 1;
        }
    }

    for (int i = 0; i < n; i++) {
        if (array[i] == 9) {
            total3 += 1;
        }
    }

    cout << "2: " << total << "5: " << total2  << "9: " << total3 << endl;

    return total;
}




int main() {
    int array[5] = {4,5,6,7,8};
    std::cout << "The number is: " << count(array, 5) << std::endl;
    return 0;
}