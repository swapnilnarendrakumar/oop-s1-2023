#include <iostream>
using namespace std;

extern void print_scaled(int array[3][3],int scale);
int main() {
    int letters[3][3] = {{ 1, 2, 3},{ 5, 7, 6},{7,8,9}};

    /*for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
         cout << letters[i][j] * 4 << "\n";
        }
    }*/
    
    print_scaled(letters, 3);


    return 0;
}
