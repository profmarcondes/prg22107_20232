#include <iostream>
#include "Dictionary.h"
#include "Word.h"
#include "Letter.h"
#include "Player.h"
#include "Hangman.h"

using namespace std;


int main() {
    string name;
    cout << "Welcome Player!"<< endl << endl;
    cout << "What is your name ? ";
    getline(cin, name);

    Player * player = new Player(name);
    Hangman * game = new Hangman();

    char op = 'y';
	while(tolower(op) == 'y') {
       player->play(game);
       player->status();

	   cout << endl << "Play again ? (y/n) ";
       op = cin.get();
       cin.ignore();
	}

    return 0;
    
    return 0;

}