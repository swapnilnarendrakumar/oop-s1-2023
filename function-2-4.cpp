#include <iostream>
using namespace std;
// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern  bool is_ascending(int array[], int n);
bool is_ascending(int array[], int n){
    int total = 0;
    for (int i = 0; i < n - 1; i++){
		if (array[i] > array[i + 1]) {
			total =  0;
		} else {
        total = 1;
    }
	} 
    return total ;
}




