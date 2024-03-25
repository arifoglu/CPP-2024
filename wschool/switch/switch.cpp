#include <iostream>
using namespace std;

int main(){
    int choice;
    cout << "Enter your choice :\nFootball(1) Basketball(2) Tennis(3)"  <<endl;
    cin  >> choice ;
    switch(choice){
        case 1 :
           cout << "big ball outdoor";
          break;
        case 2 :
           cout << "big ball indoor";
          break;
        case 3 :
           cout << "small ball outdoor";
           break;
        default :
           cout << "next time" ;       
    }
    return 0;
}