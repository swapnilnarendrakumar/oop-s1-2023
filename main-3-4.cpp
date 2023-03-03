#include <iostream>
using namespace std;

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern void print_pass_fail(char grade);

int main() {
    char grd;
    cout << "Enter a grade";
    cin >> grd;

    print_pass_fail(grd);
    return 0;
}



