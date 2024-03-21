#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x = 60;
    cout << sin(x) <<endl;
    cout << cos(x) <<endl;
    cout << tan(x) <<endl;
    
    //hypot() hypotenus
    int a = 4,b=3;
    cout << hypot(a,b) <<endl;  // 5

    // abs()
    int c = -12;
    cout << abs(c) <<endl;     // 12

    // floor
    double f = 3.6;
    cout << floor(f) <<endl;

    return 0;
}