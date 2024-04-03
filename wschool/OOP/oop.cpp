#include <iostream>
#include <string>
using namespace std;


int main(){
    class Car{
        public :
        string brand;
        string model;
        int year;
    };
    Car  sale_type ;

    sale_type.brand ;
    sale_type.model ;
    sale_type.year ;

    cin >> sale_type.brand >> sale_type.model >> sale_type.year ;    

    cout << "This model is sale " << sale_type.brand << sale_type.model << sale_type.year <<endl;


    return 0;
}