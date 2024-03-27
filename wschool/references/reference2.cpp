#include <iostream>
#include <string>
using namespace std;

int main(){
    string food = "pizza";
    string* ptr_pizza = &food;
    cout << ptr_pizza <<endl;
    cout << *ptr_pizza <<endl;
     
    *ptr_pizza = "Hamburger";
    cout << *ptr_pizza <<endl;




    return 0;
}