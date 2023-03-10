#include <iostream>
using namespace std;
extern int is_identity(int array[10][10]);

int main() {
    int letters[10][10] = {{ 1, 2,3 },{ 5, 7, 8 },{9,10,11}};

    cout<< is_identity(letters);

    return 0;
}