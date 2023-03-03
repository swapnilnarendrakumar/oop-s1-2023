

#include <iostream>
using namespace std;

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern void print_pass_fail(char grade);
void print_pass_fail(char grade){
    switch (grade){
        case 'A':

            cout << "Pass";
            break;

        case 'B':
            cout << "Pass";
            break;

        case 'C':
            cout << "Pass";
            break;

        case 'D':
            cout << "Fail";
            break;

        case 'F':
             cout << "Fail";
             break;

    }


}




int main() {
    char grd;
    cout << "Enter a grade";
    cin >> grd;

    print_pass_fail(grd);
    return 0;
}



