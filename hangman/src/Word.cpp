/*
 * Word.cpp
 *      Author: hugom
 *      NO rights reserved ;P
 */

#include "Word.h"

Word::Word(string value, string hint): _hint(hint) {
    for(auto l: value){
        _word.push_back(Letter(l));
    }
}

void Word::show(){
    cout << "The word is : " << *this << " (hint: " << _hint;
    cout << ", " << _word.size() << " letters)" << endl;
}

bool Word::hasLetter(Letter l){
    bool result = 0;
    for(auto ptr = _word.begin(); ptr != _word.end(); ptr++){
        if(*ptr == l){
            result = true;
            ptr->visible(true);
        }
    }
    return result;
}

bool Word::complete(){
    for(auto letter: _word){
        if(!letter.visible()){
            return false;
        }
    }
    return true;
}

string Word::str(){
    string result;
    for(auto letter: _word){
        result += letter.value();
    }
    return result;
}

ostream& operator<<(ostream &output, const Word &p){
    for(auto letter: p._word){
        if(letter.visible()){
            output << letter.value();
        } else {
            output << "-";
        }
    }

    return output;
}