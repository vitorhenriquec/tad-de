#ifndef CDD_H
#define CDD_H

#include<ostream>
#include<istream>
#include<string>
#include<iostream>
using namespace std;

#include"midias.hpp"

class CD : public Midias{
	private:
		string nome,compositor,gravadora;
		int qtdFaixas;
	public:
		CD();
		CD(string id,string nome, string compositor, int anoLancamento, string gravadora, int qtdFaixas);
		~CD();
		friend bool operator==(CD &f1,CD &f2);
		friend istream& operator>>(istream &i, CD &f);
		friend ostream& operator<<(ostream &o, CD &f);
};

#endif