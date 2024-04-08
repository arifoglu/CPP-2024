#include <iostream>
#include <string>
using namespace std;

class Vehicle {
    public:
     string brand = "Audi";
};
class Car {
    public :
      string model = "A8";
};
class Gear {
    public :
      string  type = "manual";
};
class Color :public Vehicle, public Car , public Gear {
    public :
      string colorful = "blue";
};



int main(){
    Color choice;

    cout << choice.brand <<endl;
    cout << choice.model<<endl;
    cout << choice.type <<endl;
    cout << choice.colorful <<endl;


    return 0;
}