#include "GuessTheNumber.h"
#include <iostream>
#include <time.h>

using namespace std;

int setDifficulty();
int main(int argc, const char * argv[]){
    GuessTheNumber startGame;
    int difficulty = setDifficulty();
    startGame.createNewDifficulty(difficulty);
    startGame.startTheGame(difficulty);
    return 0;
}
int setDifficulty() {
    int userDifficulty;
    cout << "Choose your difficulty: ";
    cin >> userDifficulty;
    if(userDifficulty < 1 || userDifficulty > 3) {
        cout << "Wrong difficulty. Please, enter the difficulty correctly!" << endl;
        do{
            cout << "Choose your difficulty, again: ";
            cin >> userDifficulty;
            if(userDifficulty < 1 || userDifficulty > 3) {
                cout << "Nope!" << endl;
            }
        }while(userDifficulty < 1 || userDifficulty > 3);
    }
    return userDifficulty;
}