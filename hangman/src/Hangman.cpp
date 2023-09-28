/*
 * Hangman.cpp
 *      Author: hugom
 *      NO rights reserved ;P
 */

#include "Hangman.h"

bool Hangman::play(Player *player){

	Letter guess('-');
	_word = _dict.choose();
	_wrong_tries.clear();

	cout << "Welcome to Hangman!" << endl;
	cout << endl << "The secret word has " <<  _word.size();
	cout << " letters and is a kind of " << _word.hint() << endl;
	_word.show();
	cout << endl;

	while(_wrong_tries.size() < 6 && !_word.complete()){

		guess = player->askLetter();

		if(!_word.hasLetter(guess)){
			if (std::find(_wrong_tries.begin(), _wrong_tries.end(), guess) == _wrong_tries.end()){
				guess.visible(true);
				_wrong_tries.push_back(guess);
			}
		}
		status();
		cout  << endl;
	}

	if(_word.complete()) {
		cout << endl << "Congratulations! You found the secret word " << _word.str() << "!" << endl;
        player->receivePoints(points());
		return true;
	} else {
		cout << endl << "Game OVER ! You did't found the secret word (" << _word.str() << ")" << endl;
		return false;
	}

}

int  Hangman::points(){
    int result = 0;
	if (_word.complete()) {
		result = _word.size() - _wrong_tries.size();
	}
	if (result < 0) result = 0;
	return result;

}

void Hangman::status(){
    _word.show();

	if(_wrong_tries.size() > 0){
		cout << "Wrong guesses: ";
        for(auto l: _wrong_tries){
            cout << l;
        }
		cout << endl;
	}
}