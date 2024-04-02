#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void swap_nums(int &x,int &y){
    int z = x;
    x = y ;
    y = z;
}

int main(){
    int num1 = 10;
    int num2 = 20;

    cout << "num1 = " << num1  << " num2 = " << num2 << endl;
    cout << "num1 Reference = " << &num1 << " num2 Reference = " << &num2 <<endl;

    swap_nums(num1,num2);
    cout << "After swap : " <<endl;

    cout << "num1 = " << num1  << " num2 = " << num2 << endl;
    cout << "num1 Reference = " << &num1 << " num2 Reference = " << &num2 <<endl;

 
    return 0;
}