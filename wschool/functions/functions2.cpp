#include <iostream>
#include <string.h>
using namespace std;

void myfunction(string country = "Suisse"){
    cout << country <<endl;
}

int main(){
    myfunction();
    myfunction("France");
    myfunction("Italy");
    myfunction();
    return 0;
}