#include <iostream>
#include <string>
using namespace std;

int main(){
    string say = "hi";
    cout << say <<endl;
    string name;
    cout << "what is your name ? "<<endl;
    cin  >> name;
    cout << say + " " + name <<endl;
    cout << "How are you " <<endl;
    string answer;
    cin  >> answer;
    cout << "thanks your response "<<endl;
    cout << "we talked with " << name << " and then we asked him and he said " << answer <<endl; 
    cout << "we will ask him that what is yourlastname "<<endl;
    string lastname;
    cin >> lastname;
    string fullName = name.append(lastname);
    cout << "fullName is " << fullName <<endl;


    return 0;
}