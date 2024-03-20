#include <iostream>
#include <string>
using namespace std;

int main(){
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << txt << endl << "Length of txt is : " << txt.length() <<endl;
    
    string greetings = "HELLO";
    cout << greetings << "size " <<greetings.size() << " letter" <<endl;

    // acces to strings
    cout << txt[0] <<endl;

    cout << "[" ;
    for(int i = 0 ; i < txt.length() ; i++){
        cout << txt[i] ;
    }
    cout << "]" <<endl;

    txt[0] = 'p',
    cout << txt <<endl;

    return 0;
}