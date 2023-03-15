#include <iostream>
using namespace std;

int size_of_array_arr(){
    int *array = new int[7];

    return sizeof(array)/sizeof(array[0]);

}

int main(){
    int *array = new int[7];
    //int array[7] = {1,2,3,4,5,6,7};

    //int x = sizeof(array);
    //int y = sizeof(array)/sizeof(array[0]);
    //cout << x << endl;
    //cout << y;
}