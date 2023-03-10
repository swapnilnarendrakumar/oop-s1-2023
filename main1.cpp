#include <iostream>
using namespace std;

int main() {
    int letters[2][4] = {
    { 1, 2,3, 4 },
    { 5, 7, 8, 9 }
    };
    int betches[2][4] = {{9,8,9,8},{9,8,9,8}};

    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 4; j++) {
            cout << letters[i][j] << "\n";
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
             cout << betches[i][j] << "\n";
        }
    }
    // narendra
    for (int i = 0; i < 2; i++) {
         for (int j = 0; j < 4; j++) {
             cout << betches[i][j] + letters[i][j]<< "\n";
        }
    }
    return 0;
}