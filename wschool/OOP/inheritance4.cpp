#include <iostream>
#include <string>
using namespace std;

class Employee{
    protected :
      int salary;
};
// derived class
class Programmer : public Employee{
    public :
     int bonus;
     void setSalary(int s){
        salary = s;
     }
     int getSalary(){
        return salary;
     }
};

int main(){
    Programmer myObj;
    myObj.setSalary(5000);
    myObj.bonus = 1500;
    cout << "salary :" << myObj.getSalary() <<endl;
    cout << "bonus :" << myObj.bonus <<endl;


    return 0;
}