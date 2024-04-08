#include <iostream>
#include <string>
using namespace std;

class Vehicle {
    public :
     string brand = "Ford" ;
    void honk() {
        cout << "dat!!!" <<endl;
    } 
};
class Car : public Vehicle {
    public:
     string model = "Mustang";
};
class Gear : public Car {
    public :
      string type = "manual gear";
};
int main(){
    Gear choice;

    cout << choice.brand <<endl;
    cout << choice.model <<endl;
    choice.honk();
    cout << choice.type <<endl;


    return 0;
}