#include <iostream>
using namespace std;

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern  int count_digits(int array[4][4]);
int count_digits(int array[4][4]){
    int total = 0;
    int total2 = 0;
    int total3 = 0;
    int total4 = 0;
    int total5 = 0;
    int total7 = 0;
    int total8 = 0;
    int total9 = 0;
    int total11 = 0;
    int total6 = 0;

   
     for (int i = 0; i < 4; i++) {

        for (int j = 0; j < 4; j++) {
            if( array[i][j] == 0){
                total6 += 1;
            }
        }
    }

    for (int i = 0; i < 4; i++) {

        for (int j = 0; j < 4; j++) {
            if( array[i][j] == 1){
                total += 1;
            }
        }
    }

    for (int i = 0; i < 4; i++) {

        for (int j = 0; j < 4; j++) {
            if(array[i][j]  == 2){
                total2 += 1;
            }
        }
    }

    for (int i = 0; i < 4; i++) {

        for (int j = 0; j < 4; j++) {
            if( array[i][j] == 3){
                total3 += 1;
            }
        }
    }

    for (int i = 0; i < 4; i++) {

        for (int j = 0; j < 4; j++) {
            if(  array[i][j]== 4){
                total4 += 1;
            }
        }
    }
    for (int i = 0; i < 4; i++) {

        for (int j = 0; j < 4; j++) {
            if( array[i][j] == 5){
                total5 += 1;
            }
        }
    }
    
    for (int i = 0; i < 4; i++) {

        for (int j = 0; j < 4; j++) {
            if( array[i][j] == 6){
                total7 += 1;
            }
        }
    }

    for (int i = 0; i < 4; i++) {

        for (int j = 0; j < 4; j++) {
            if( array[i][j] == 7){
                total8 += 1;
            }
        }
    }
    
    for (int i = 0; i < 4; i++) {

        for (int j = 0; j < 4; j++) {
            if( array[i][j] == 8){
                total9 += 1;
            }
        }
    }

    for (int i = 0; i < 4; i++) {

        for (int j = 0; j < 4; j++) {
            if( array[i][j] == 9){
                total11 += 1;
            }
        }
    }



    cout <<"0:" << total6 <<";"<< "1:" << total << ";" << "2:" << total2 << ";"  << "3:" << total3<< ";" << "4:" << total4 << ";"<< "5:" << total5 << ";" << "6:" << total7 << ";" << "7:" << total8 << ";"<< "8:" << total9 << ";" << "9:" << total11 << ";"<<endl;

    return total;
}

