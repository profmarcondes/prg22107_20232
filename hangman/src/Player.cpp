/*
 * Player.cpp
 *      Author: hugom
 *      NO rights reserved ;P
 */

#include "Player.h"

void Player::play(Hangman *game){
    _plays++;
    if(game->play(this)){
        _wins++;
    }
}
	
Letter Player::askLetter(){
    string input;
	cout << "Guess a letter: ";
	getline(cin,input);
	return Letter(input[0]);
}

void Player::status(){
    cout << endl << _name << "\'s Statistics: " << endl;
	cout << "Plays: " << _plays << endl;
	cout << "Wins: " << _wins << endl;
	cout << "Wins percentage: " << (double)_wins/_plays << endl;
	cout << "Points: " << _score << endl;
}