#include <iostream>
#include <string>
using namespace std;

int main(){
    int nums[] = {0,5,10,15,20};
    cout << sizeof(nums)  <<endl;                // 20
    cout << sizeof(nums) / sizeof(int) <<endl;  //  5

    int leng = sizeof(nums) / sizeof(int);

    for(int i = 0 ; i < leng  ; i++ ){
        cout << nums[i] ;
    }

    return 0;
}