#ifndef LIV_H
#define LIV_H

#include<iostream>
#include<ostream>
#include<istream>
#include<string>
using namespace std;

#include"midias.hpp"

class Livro: public Midias{
	private:
		string titulo,autor,editora,iSBN;
	public:
		Livro();
		Livro(string id, string titulo, string autor, string editora, string isBN, int anoLancamento);
		~Livro();
		friend bool operator==(Livro &f1,Livro &f2);
		friend istream& operator>>(istream &i, Livro &f);
		friend ostream& operator<<(ostream &o, Livro &f);
};

#endif