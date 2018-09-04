#include"../include/livro.hpp"

Livro::Livro(){
	
}

Livro::Livro(string id, string titulo, string autor, string editora, string iSBN, int anoLancamento){
	this->tipo = "Livro";
	this->id = id;
	this->titulo = titulo;
	this->autor = autor;
	this->editora = editora;
	this->iSBN = iSBN;
	this->anoLancamento = anoLancamento;
}

Livro::~Livro(){

}

bool operator==(Livro &f1,Livro &f2){
	if(f1.id == f2.id && f1.titulo == f2.titulo && f1.autor == f2.autor && f1.editora == f2.editora && f1.anoLancamento == f2.anoLancamento && f1.iSBN == f2.iSBN){
		return true;
	}
	return false;
}

istream& operator>>(istream &i, Livro &f){
	f.tipo="Livro"; //Vem de midia
	cout << "ID:" << endl;
	i >> f.id;
	cout << "Titulo:" << endl;
	i >> f.titulo;
	cout << "Autor:" << endl;
	i >> f.autor;
	cout << "Editora:" << endl;
	i >> f.editora;
	cout << "iSBN:" << endl;
	i >> f.iSBN;
	cout << "Ano de lançamento:" << endl;
	i >> f.anoLancamento;
	return i;
}

ostream& operator<<(ostream &o, Livro &f){
	o << "Tipo:" << f.tipo << endl;
	o << "ID:" << f.id << endl;
	o << "Titulo: " << f.titulo << endl;
	o << "Autor: " << f.autor << endl;
	o << "Editora: " << f.editora << endl;
	o << "iSBN: " << f.iSBN << endl;
	o << "Ano de lançamento:" << f.anoLancamento << endl;
	return o;
}
