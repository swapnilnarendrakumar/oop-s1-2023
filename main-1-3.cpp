#include <iostream>
using namespace std;

//extern int sum_diagonal(int array[4][4]);

/*int sum_diagonal(int array[4][4]){
    int total = 0;
    for (int i = 0; i < 4; i++) {

        for (int j = 0; j < 4; j++) {
            if( i == j){
                total += array[i][j];
            }
        }
    }
    return total;
}*/

extern  int count_digits(int array[4][4]);
int main() {
  
    int numbers[4][4] = {{ 1,2,3,4 },{ 5, 7, 8 ,9},{9,10,11,12},{1,2,3,4}};
    /*
    int total = 0;
    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {
            if( i == j){
                total += letters[i][j];
            }
        }
    }
    // narendra elp*/

    cout <<  count_digits(numbers) << endl;

  
    return 0;
}