#include"../include/cd.hpp"

CD::CD(){

}

CD::CD(string id,string nome, string compositor, int anoLancamento, string gravadora, int qtdFaixas){
	this->id = id;
	this->tipo = "CD";  
	this->nome = nome;
	this->compositor = compositor;  
	this->anoLancamento = anoLancamento;
	this->gravadora = gravadora;
	this->qtdFaixas = qtdFaixas;
}

CD::~CD(){

}

bool operator==(CD &f1,CD &f2){
	if(f1.id == f2.id && f1.nome == f2.nome && f1.compositor == f2.compositor && f1.gravadora == f2.gravadora && f1.qtdFaixas == f2.qtdFaixas && f1.anoLancamento == f2.anoLancamento && f1.anoLancamento == f2.anoLancamento){
		return true;
	}
	return false;
}


istream& operator>>(istream &i, CD &f){
	f.tipo="CD"; //Vem de midia
	cout << "ID:" << endl;
	i >> f.id;
	cout << "Nome:" << endl;
	i >> f.nome;
	cout << "Compositor:" << endl;
	i >> f.compositor;
	cout << "Ano de Lançamento:" << endl;
	i >> f.anoLancamento;
	cout << "Gravadora:" << endl;
	i >> f.gravadora;
	cout << "Quantidade das faixas: " << endl;
	i >> f.qtdFaixas;
	return i;
}

ostream& operator<<(ostream &o, CD &f){
	o << "Tipo:" << f.tipo << endl;
	o << "ID:" << f.id << endl;
	o << "Nome: " << f.nome << endl;
	o << "Salario: " << f.compositor << endl;
	o << "CPF: " << f.anoLancamento << endl;
	o << "Nome da Fabrica: " << f.gravadora << endl;
	o << "Quantidade das faixas: " << f.qtdFaixas << endl;
	return o;
}
