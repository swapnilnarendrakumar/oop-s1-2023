#include <iostream>
using namespace std;


void print_binary_str(string decimal_number){
    int num = stoi(decimal_number);
    int array[32]; int i = 0; 

    while(num > 0){
		array[i] = num % 2;
		num = num / 2;
        i++;
	}
    for (i = i - 1; i >= 0; i--)
        cout << array[i];












}


