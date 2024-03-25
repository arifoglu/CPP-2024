#include <iostream>
using namespace std;

int main(){
    int x ;
    cout << "Enter a number please :" ;
    cin  >> x ;
    if(x < 0){
        cout << "this is not integer " <<endl;
    }else if(x > 0 && x < 10){
        cout << "this number greater than 0 less than 10" <<endl;
    }else{
        cout << "this number greater than 10" <<endl;
    }

    return 0;
}