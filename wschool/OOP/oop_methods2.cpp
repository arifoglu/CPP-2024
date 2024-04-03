#include <iostream>
#include <string>
using namespace std;

class Car{
public:
    string brand;
    string model;
    int year;
    void offer(int age);
};

void Car::offer(int age){
    if(age <= 18){
        cout << "%50 sale";
    } else if(age > 18 && age <= 25){
        cout << "%25 sale";
    } else {
        cout << "There is no sale";
    }
}

int main(){
    Car sale;

    cout << "Enter your car infos: " << endl;
    cin >> sale.brand >> sale.model >> sale.year;
    cout << "This product for you " << sale.brand << " " << sale.model << " " << sale.year << endl;
     
    cout << "Enter your age: " << endl;
    int age;
    cin >> age;
    sale.offer(age); 

    return 0;
}
