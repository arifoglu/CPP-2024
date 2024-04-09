#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // create file

    ofstream Myfile("C:/Users/abdulkadir.arifoglu/Documents/CPP-2024/wschool/files/a.txt");

    // write to file

    Myfile << "I have written it" ;

    // close

    Myfile.close();
}