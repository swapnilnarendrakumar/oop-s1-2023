#include <iostream>
using namespace std;

int main() {
    int letters[3][3] = {{ 1, 2,3 },{ 5, 7, 8 },{9,10,11}};
    //int betches[2][4] = {{9,8,9,8},{9,8,9,8}};

    /*for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 4; j++) {
    cout << letters[i][j] << "\n";
    }
    }*/
    /*for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 4; j++) {
    cout << betches[i][j] << "\n";
    }
    }*/
    // narendra
    int total = 0;
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