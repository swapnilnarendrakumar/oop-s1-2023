#include <iostream>
using namespace std;

extern void print_pass_fail(char grade);

int main() {
    char grade;
    cout << "Enter a grade";
    cin >> grade;

    print_pass_fail(grade);

}



