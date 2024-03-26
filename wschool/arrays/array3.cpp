#include <iostream>
#include <string>
using namespace std;

int main(){
    string letters[2][4] = { { "A", "B", "C", "D" },
                             { "E", "F", "G", "H" } };
    cout << letters[0][0] <<endl;  // A
    cout << letters[0][1] <<endl;  // B
    cout << letters[0][2] <<endl;  // C
    cout << letters[0][3] <<endl;  // D

    for(int i = 0 ; i < 2 ;i++){
        for(int k = 0 ;k < 4;k++){
            cout << letters[i][k] ;
        }
    }
                                                    
    return 0;
}