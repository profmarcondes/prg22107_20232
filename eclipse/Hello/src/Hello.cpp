//============================================================================
// Name        : Hello.cpp
// Author      : Hugo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

class Pen {
	unsigned int _color;
	unsigned int _inklevel;

public:
	enum Color {
		RED,
		GREEN,
		BLUE,
		BLACK
	};

	Pen(){
		_color = Color::BLUE;
		_inklevel = 10000;
	}

	Pen(Color color, unsigned int inklevel) {
		_color = color;
		_inklevel = inklevel;
	}

	unsigned int inklevel() {
		return _inklevel;
	}

	void color(Color param){
		_color = param;
	}

	void write(string text);
};

void Pen::write(string text){
		cout << this << endl;
		if(_inklevel > text.size()) {
		   cout << "(" << _color << ")" << text << endl;
		   _inklevel -= text.size();
		} else {
			cout << "No sufficient ink for printing!!!" << endl;
		}
	}

class World {

	string _nome;
	Pen    _writer;

public:
	World(string nome = "World"){
		_nome = nome;
	}

	void sayHello();

};

void World::sayHello(){
	_writer.write( "Hello " + _nome );
	//cout << "Hello World!" << endl;
}

Pen obj;

int main() {

	Pen pentel(Pen::Color::BLACK, 100);

	obj.write("Global_Object");

	pentel.write("Hello!!!");
	cout << "Ink level = " << pentel.inklevel() << endl;

	World objeto01("Terra");
	objeto01.sayHello();

	World objeto02("Marte");
	objeto02.sayHello();

	World objeto03("Mordor");
	objeto03.sayHello();

	return 0;
}















