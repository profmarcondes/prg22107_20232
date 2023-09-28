/*
 * Dictionary.h
 *      Author: hugom
 *      NO rights reserved ;P
 */

#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <iostream>
#include <vector>
#include <ctime>
#include "Word.h"

using namespace std;

class Dictionary {
public:
	Dictionary();
	void add(Word p);
	Word choose();

private:
	vector<Word> _words;
    
};

#endif