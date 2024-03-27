#include <iostream>
#include <string>
using namespace std;

int main(){
    bool ships[4][4] = {
        {0, 1, 1, 0},
        {0, 0, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 1, 0}
    };
    int hits = 0;
    int numberofTurns = 0;

    while(hits < 4){
        int row,column;
        cout << "select a coordinate \n";

        cout << "Choose a row between 0 and 3 :";
        cin  >> row;

        cout << "Choose a column between 0 and 3 :";
        cin  >> column;

        if(ships[row][column]){
            ships[row][column] = 0;

            hits++;

            cout << "Hit!" << (4-hits) << "left.\n\n";
        }else{
            cout << "miss\n\n";
        }

        numberofTurns++;
    }
    cout << "Victory\n" << "you won in " << numberofTurns << "Turns";


    return 0;
}