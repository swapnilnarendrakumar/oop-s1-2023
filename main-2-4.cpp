#include <iostream>
using namespace std;

extern  bool is_ascending(int array[], int n);



int main() {
    int array[5] = {4,5,6,7,8};
    cout << "The number is: " << std::boolalpha << is_ascending(array, 5) << endl;
    return 0;
}