#include <iostream>
#include <string>
using namespace std;

void myfunction(int numeros[5]){
    for(int i = 0 ; i < 5 ;i++ ){
        cout << numeros[i] <<endl;
    }
}

int main(){
    int nums[5] = {1,2,3,4,5};
    myfunction(nums);
    return 0;
}