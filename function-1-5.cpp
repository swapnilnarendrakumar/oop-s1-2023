#include <iostream>
using namespace std;
// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern  int count_evens(int number);

int count_evens(int number){
    int total = 0;


    for (int i = 0; i < number; i++) {
        if (i % 2 == 0)
            total += 1;
        }
    

    return total;
}




int main() {
    int x;
    cout << "Enter a number";
    cin >> x;

    cout << "The number of numbers are :" << count_evens(x) << endl;

    return 0;
}