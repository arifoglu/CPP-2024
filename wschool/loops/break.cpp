#include <iostream>
using namespace std;

int main(){
    for (int i = 0 ; i < 25 ;i++){
       if(i == 13) {
            cout << "you arrived" <<endl;
            break;
        }
        cout << i <<endl;        
    }

    return 0;
}