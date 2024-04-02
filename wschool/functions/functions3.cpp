#include <iostream>
#include <string.h>
using namespace std;

void myfunction(string fname,int age){
    cout << fname << " " << age << " years old." <<endl;
}

int main(){
    int numbers;
    cout << "How many person do you want to registered? ";
    cin  >> numbers;
    for(int i = 0; i < numbers ;i++){
        string firstname;
        int age;
        cout << "Firstname : " ;
        cin >> firstname;
        cout << "Age: " ;
        cin >> age;
        myfunction(firstname,age);   
    }
    
    return 0;
}