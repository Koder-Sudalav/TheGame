#include <iostream>

using namespace std;

#ifndef GUESSTHENUMBER_H
#define GUESSTHENUMBER_H


class GuessTheNumber {
private:
	int difficulty;
public:
	void createNewDifficulty(int newDifficulty) {
		difficulty = newDifficulty;
	}
	void startTheGame(int difficulty) {
	bool gameResult = false;
	int userNumber;
	int mistakes = 0;
	int generateNumber;
	srand(time(0));
		switch(difficulty) {
		case 1:
			generateNumber = rand() % 50 + 1;
			while(mistakes < 10){
				cout << "Enter your number to 1 do 50: ";
				cin >> userNumber;
				if(userNumber < 1 || userNumber > 50){
					cout << "Wrong number. Please, enter your number correctly!" << endl;
					do{
						cout << "Enter your number to 1 do 50, again: ";
						cin >> userNumber;
						if(userNumber < 1 || userNumber > 50) {
							cout << "Nope" << endl;
						}
					}while(userNumber < 1 || userNumber > 50);
				}
				if(userNumber == generateNumber) {
						cout << "You Win!" << " My number is: " << generateNumber << endl;
						gameResult = true;
						break;
				} else {
					cout << "Just try again!" << endl;
					mistakes++;
				}
				if(userNumber < generateNumber) {
					cout << "Your number is small..." << endl;
				} else {
					cout << "Your number is big..." << endl;
				}
			}
			if(!gameResult) {
				cout << "You Lose!" << endl;
			}
			break;
		case 2:
			generateNumber = rand() % 75 + 1;
			while(mistakes < 5){
				cout << "Enter your number to 1 do 75: ";
				cin >> userNumber;
				if(userNumber < 1 || userNumber > 75){
					cout << "Wrong number. Please, enter your number correctly!" << endl;
					do{
						cout << "Enter your number to 1 do 75, again: ";
						cin >> userNumber;
						if(userNumber < 1 || userNumber > 75) {
							cout << "Nope" << endl;
						}
					}while(userNumber < 1 || userNumber > 75);
				}
				if(userNumber == generateNumber) {
						cout << "You Win!" << " My number is: " << generateNumber << endl;
						gameResult = true;
						break;
				} else {
					cout << "Just try again!" << endl;
					mistakes++;
				}
				if(userNumber < generateNumber) {
					cout << "Your number is small..." << endl;
				} else {
					cout << "Your number is big..." << endl;
				}
			}
			if(!gameResult) {
				cout << "You Lose!" << endl;
			}
			break;
		case 3:
			generateNumber = rand() % 100 + 1;
			while(mistakes < 3){
				cout << "Enter your number to 1 do 100: ";
				cin >> userNumber;
				if(userNumber < 1 || userNumber > 100){
					cout << "Wrong number. Please, enter your number correctly!" << endl;
					do{
						cout << "Enter your number to 1 do 100, again: ";
						cin >> userNumber;
						if(userNumber < 1 || userNumber > 100) {
							cout << "Nope" << endl;
						}
					}while(userNumber < 1 || userNumber > 100);
				}
				if(userNumber == generateNumber) {
						cout << "You Win!" << " My number is: " << generateNumber << endl;
						gameResult = true;
						break;
				}
				else {
					cout << "Just try again!" << endl;
					mistakes++;
				}
			}
			if(!gameResult) {
				cout << "You Lose!" << endl;
			}
			break;
		}
	}
};



#endif //GUESSTHENUMBER_H
