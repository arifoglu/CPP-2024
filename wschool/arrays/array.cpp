#include <iostream>
#include <string>
using namespace std;

int main(){
    string letters[5] = {"H","E","L","L","O"};
    for(int i = 0 ; i < 5 ; i++){
        cout << letters[i];
    }
    cout << endl;
    
    int nums[5] = {0,1,2,3,4};
    for(int i = 0 ; i < 5 ; i++){
        cout << nums[i] ;
    }

    // foreach
    int nums2[5] = {10,20,30,40,50};
    for(int i : nums2){
        cout << i << "\n" ;
    } 
    return 0;
}