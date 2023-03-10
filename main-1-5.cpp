#include <iostream>
using namespace std;

extern void print_summed(int array1[3][3],int array2[3][3]);
int main() {
    int letters[3][3] = {{ 1, 2,3},{ 5,7,8},{1,2,1}};
    int betches[3][3] = {{9,8,9},{9,8,9},{1,2,1}};

    print_summed(letters, betches);


}