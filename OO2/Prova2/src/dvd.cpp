#include"../include/dvd.hpp"

DVD::DVD(){

}

DVD::DVD(string id,string titulo, string diretor, string duracao, string classificacao, int anoLancamento){
	this->id = id;
	this->tipo = "DVD";
	this->titulo = titulo;
	this->diretor = diretor;  
	this->anoLancamento = anoLancamento;
	this->duracao = duracao;
	this->classificacao = classificacao;
}

DVD::~DVD(){

}

bool operator==(DVD &f1,DVD &f2){
	if(f1.id == f2.id && f1.titulo == f2.titulo && f1.diretor == f2.diretor && f1.duracao == f2.duracao && f1.classificacao == f2.classificacao && f1.anoLancamento == f2.anoLancamento){
		return true;
	}
	return false;
}


istream& operator>>(istream &i, DVD &f){
	f.tipo="DVD";
	cout << "ID:" << endl;
	i >> f.id;
	cout << "Titulo:" << endl;
	i >> f.titulo;
	cout << "Diretor:" << endl;
	i >> f.diretor;
	cout << "Duracao:" << endl;
	i >> f.duracao;
	cout << "Classificacao:" << endl;
	i >> f.classificacao;
	cout << "Ano de Lançamento:" << endl;
	i >> f.anoLancamento;
	return i;
}

ostream& operator<<(ostream &o, DVD &f){
	o << "Tipo:" << f.tipo << endl;
	o << "ID:" << f.id << endl;
	o << "Titulo:" << f.titulo << endl;
	o << "Diretor: " << f.diretor << endl;
	o << "Duracao: " << f.duracao << endl;
	o << "Classificacao: " << f.classificacao << endl;
	o << "Ano de Lançamento: " << f.anoLancamento << endl;
	return o;	
}