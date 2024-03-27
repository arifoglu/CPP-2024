#include <iostream>
#include <string>
using namespace std;

int main(){
    struct {
        int num;
        string word;    
    }mystruct;

    cout << "Enter a num :";
    cin  >> mystruct.num ;
    cout << "Enter a word :";
    cin  >> mystruct.word ;
    
    cout << "you entered " << mystruct.num <<  " and " << mystruct.word <<endl;


    struct {
        int year;
        string brand;    
        string model;    
    }myCar1 ,myCar2;

    cout << "Enter a Car brand :";
    cin  >> myCar1.brand ;
    cout << "Enter a model :";
    cin  >> myCar1.model ;
    
    cout << "your Car1 :" << myCar1.brand + myCar1.model <<endl;

    return 0;
}