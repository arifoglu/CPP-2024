#include <iostream>
#include <string>
using namespace std;

class MyClass{
    public :
      int x;
    //private:
    //  int y;  
};

int main(){
    MyClass nums;

    nums.x = 25;  // public
    // nums.y = 20; // private


    return 0;
}