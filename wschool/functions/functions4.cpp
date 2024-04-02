#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int squareRoot(int x, int y){
    return sqrt(x * x + y * y);
}

int main(){
    int a,b;
    cout << "Type in a side of triangle: ";
    cin  >> a ;
    cout << "Type in second side of triangle: ";
    cin  >> b ;
    int z = squareRoot(a,b);
    cout << "This is a " << a << " " << b << " " << z << " triangle" ;

    return 0;
}