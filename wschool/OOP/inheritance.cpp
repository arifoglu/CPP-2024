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

int main(){
    Car choice;
    cout << choice.brand <<endl;
    cout << choice.model <<endl;
    choice.honk();


    return 0;
}