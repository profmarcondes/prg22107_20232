/*
 * Hangman.h
 *      Author: hugom
 *      NO rights reserved ;P
 */

#ifndef HANGMAN_H
#define HANGMAN_H

#include <algorithm>
#include <iostream>

#include "Dictionary.h"
#include "Letter.h"
#include "Player.h"

using namespace std;

class Hangman {
public:
	bool play(Player *p);

private:
	int  points();
	void status();

	Dictionary      _dict;
	Word 	        _word;
	vector<Letter>  _wrong_tries;

};



#endif