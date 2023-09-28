/*
 * Player.h
 *      Author: hugom
 *      NO rights reserved ;P
 */

#ifndef PLAYER_H
#define PLAYER_H

#include "Hangman.h"
#include "Letter.h"
#include <iostream>
#include <string>

using namespace std;

class Hangman;

class Player {
public:
	Player(string n): 
        _name(n), 
        _score(0), 
        _wins(0), 
        _plays(0) {}

	void play(Hangman *game);
    void receivePoints(int points) { _score += points; }
	Letter askLetter();
	void status();

private:
	string  _name;
	int		_score;
	int 	_wins;
	int 	_plays;

};

#endif