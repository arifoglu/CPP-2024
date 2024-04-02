#include <iostream>
#include <string>
using namespace std;

int main(){
    string food = "pizza";
    string* ptr = &food; 
    cout << &food <<endl;

    int num = 23;
    int* ptr_num = &num;
    cout << *ptr_num <<endl;//derefencing => 23 
    cout << ptr_num <<endl;//0x5ffe4c
    cout << &num <<endl;  // 0x5ffe4c

    cout << *&num <<endl;  // 23

    return 0;
}