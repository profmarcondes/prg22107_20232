#ifndef LETTER_H
#define LETTER_H

#include <iostream>

using namespace std;

class Letter {

    public:
        Letter(char a): _value(a), _visible(false) { }

        bool visible() { return _visible; }
        void visible(bool value) { _visible = value; }
        char value() { return _value; }

        bool operator==(const Letter &l1) {
            return ( this->value() == l1._value );
        }

        friend ostream& operator<<(ostream &output, const Letter &letter) {
            output << letter._value;
            return output;
        }

    private:
        char _value;
        bool _visible;

};

#endif