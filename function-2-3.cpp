#include <iostream>
using namespace std;




int sum_integers(int integers[], int length){
    int answer = 0;
    for (int i=0; i < length; i++){
        answer += integers[i];
        
    }

    return answer;
}

bool is_array_palindrome(int integers[], int length){
    int boolop = 0;

    for (int i = 0; i < length/2; i++){
        if (integers[i] != integers[length - i - 1]){
            boolop = 0;
            break;

        }
        if (integers[i] == integers[length - i - 1]){
            boolop = 1;
            
        }
    }

    return boolop;

}



int palindrome_sum(int integers[], int length){
    int answer = 0;
    bool finalresult = is_array_palindrome(integers, length);
    if (finalresult == 1){
        answer = sum_integers(integers, length);

    }

    return answer;


}

