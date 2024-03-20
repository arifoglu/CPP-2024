#include <iostream>
#include <string>
using namespace std;

int main(){
    // to get all line information getline()
    string fullName;
    cout << "Enter fullName :";
    getline (cin, fullName);
    cout << " your fullname is :" << fullName <<endl;

    return 0;
}