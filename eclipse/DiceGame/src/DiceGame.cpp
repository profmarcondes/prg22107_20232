//============================================================================
// Name        : DiceGame.cpp
// Author      : Hugo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <ctime>

using namespace std;

class Die {
	unsigned int faceValue;

public:
	Die(){
		srand(time(NULL));
		faceValue = 1;
	}
	void roll();
	unsigned int getFaceValue() { return faceValue; };
};

class DiceGame{

	Die _d1;
	Die _d2;

public:
	bool play();
};

bool DiceGame::play() {
	_d1.roll();
	_d2.roll();

	if( (_d1.getFaceValue() + _d2.getFaceValue()) == 7 ) {
		return true;
	} else {
		return false;
	}
}

void Die::roll() {
	faceValue = (rand() % 6) + 1;
}

int main() {
	cout << "Hello World!" << endl; // prints Hello World!
	return 0;
}
