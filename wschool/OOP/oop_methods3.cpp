#include <iostream>
#include <string>
using namespace std;

class  Car{
    public :
      string brand;
      string model;
      int year;
      Car(string x,string y,int z){ // Constructor
        brand = x;
        model = y;
        year = z;
      }
};

int main(){
    Car carObj1("BMW","x5",2023);
    Car carObj2("Alfa","3000",2021);

    cout << carObj1.brand << carObj1.model << carObj1.year <<endl;
    cout << carObj2.brand << carObj2.model << carObj2.year <<endl;


    return 0;
}