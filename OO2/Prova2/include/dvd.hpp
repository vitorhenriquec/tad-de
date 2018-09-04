#ifndef DVD_H
#define DVD_H

#include<ostream>
#include<istream>
#include<string>
#include<iostream>
using namespace std;

#include"midias.hpp"

class DVD: public Midias{
	private:
		string titulo,diretor,duracao,classificacao;
	public:
		DVD();
		DVD(string id,string titulo, string diretor, string duracao, string classificacao, int anoLancamento);
		~DVD();
		friend bool operator==(DVD &f1,DVD &f2);
		friend istream& operator>>(istream &i, DVD &f);
		friend ostream& operator<<(ostream &o, DVD &f);
};

#endif