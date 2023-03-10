#include <iostream>
using namespace std;


int is_identity(int array[10][10]){
     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if ( letters[i][j] == 1 && letters[j][i] == 0){
                
                cout << "yes" << endl;
            }


            else{
                 total = 1;
                 break;
            }
        }
    }
    if (total == 0){
        cout << "an identity matrix" << endl;
    }
    else{
        cout << " not an identity matrix " << endl;
    }
    return 0;
}
