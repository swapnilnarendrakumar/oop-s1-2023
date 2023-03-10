#include <iostream>
using namespace std;

int main() {
    int letters[2][4] = {{ 1, 2, 3, 4 },{ 5, 7, 6, 8 }};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
         cout << letters[i][j] * 4 << "\n";
        }
    }
    return 0;
}
