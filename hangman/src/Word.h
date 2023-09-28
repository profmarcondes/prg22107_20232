/*
 * Word.h
 *      Author: hugom
 *      NO rights reserved ;P
 */

#ifndef WORD_H
#define WORD_H

#include "Letter.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Word {

    public:
        Word(string value, string hint);

        void show();
        bool hasLetter(Letter l);
        bool complete();
        string hint() { return _hint; }
        int  size() { return _word.size(); }
        string str();

        friend ostream& operator<<(ostream &output, const Word &p);

    private:
        vector<Letter> _word;
        string         _hint;

};


#endif