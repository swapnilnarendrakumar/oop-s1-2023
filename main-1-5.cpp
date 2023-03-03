#include <iostream>
using namespace std;

extern  int count_evens(int number);


int main() {
    int x;
    cout << "Enter a number";
    cin >> x;

    cout << "The number of numbers are :" << count_evens(x) << endl;

    return 0;
}