#include <iostream>
using namespace std;

int main(){
    int numbers[5] = {1,2,3,4,5};
    for(int i : numbers){
        cout << i + 3 <<endl;
    }


    return 0;
}