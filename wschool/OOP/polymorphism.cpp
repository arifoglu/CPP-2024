#include <iostream>
#include <string>
using namespace std;

class Animal{
    public :
     void animalSound(string x){
        cout << "The animal makes a sound " << x <<endl;
     }
};
class Dog : public Animal {
    public:
    void animalSound(string x){
        cout << "The dog says :" << x <<endl;
    }; 
};
class Pig : public Animal {
    public:
    void animalSound(string x){
        cout << "The pig says " << x <<endl;
    }; 
};

int main(){
    Animal choice;
    Dog myDog;
    Pig myPig;

    //choice.animalSound();
    myDog.animalSound("hav hav");
    myPig.animalSound("gork gork");

    return 0;
}

