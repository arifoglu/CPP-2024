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
    int num1 ,num2;
    cout << "Enter a num1 : " ;
    cin  >> num1;
    cout << "Enter a num2 : " ;
    cin  >> num2;

    cout << "num1 = " << num1  << " num2 = " << num2 << endl;
    cout << "num1 Reference = " << &num1 << " num2 Reference = " << &num2 <<endl;

    swap_nums(num1,num2);
    cout << "After swap : " <<endl;

    cout << "num1 = " << num1  << " num2 = " << num2 << endl;
    cout << "num1 Reference = " << &num1 << " num2 Reference = " << &num2 <<endl;

 
    return 0;
}