#include <iostream>
using namespace std;


int is_identity(int array[10][10]){
    int total=0;
     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if ( array[i][j] == 1 && array[j][i] == 0){
                
                total = 1;
            }


            else{
                 total = 0;
                 
            }
        }
    }
    /*if (total == 0){
        cout << "an identity matrix" << endl;
    }
    else{
        cout << " not an identity matrix " << endl;
    }*/
    return total;
}
