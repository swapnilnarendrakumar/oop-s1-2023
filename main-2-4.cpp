#include <iostream>
using namespace std;

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int sum_min_max(int integers[], int length);

int main() {
    int letters[7] = {1,2,3,4,5,7,8};

    /*for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
         cout << letters[i][j] * 4 << "\n";
        }
    }*/
    
    cout << sum_min_max(letters, 7);


   
}
