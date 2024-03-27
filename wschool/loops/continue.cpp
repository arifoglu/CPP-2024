#include <iostream>
using namespace std;

int main(){
    for(int i = 0 ; i < 25 ;i++){
        if(i%2 == 0){
            continue;
        }
        cout << i;
    }
    return 0;
}