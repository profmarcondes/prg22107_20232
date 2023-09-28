#include "Dictionary.h"


Dictionary::Dictionary() {
	srand(time(NULL));
	add(Word("tubarao","animal"));
	add(Word("amarelo","cor"));
	add(Word("azul","cor"));
	add(Word("vermelho","cor"));
	add(Word("tartaruga","animal"));
	add(Word("polvo","animal"));
	add(Word("pente","objeto"));
	add(Word("verde","cor"));
	add(Word("recife","cidade"));
	add(Word("florianopolis","cidade"));
	add(Word("marrom","cor"));
	add(Word("andar","verbo"));
	add(Word("dormir","verbo"));
	add(Word("correr","verbo"));
	add(Word("pular","verbo"));
}

void Dictionary::add(Word w){
	_words.push_back(w);
}

Word Dictionary::choose(){
	int idx = rand() % _words.size();
	return _words[idx];
}