#include"../include/midias.hpp"

Midias::Midias(){
}

Midias::~Midias(){

}

string Midias::getTipo(){
	return this->tipo;
}

string Midias::getId(){
	return this->id;
}

/*string Funcionario::getCargo(){
	return this->cargo;
}

string Funcionario::getNome(){
	return this->nome;
}

string Funcionario::getCPF(){
	return this->CPF;
}

void Funcionario::setSalario(float salario){
	this->salario = salario;
}

float Funcionario::getSalario(){
	return this->salario;
}

bool operator==(Funcionario &f1,Funcionario &f2){
	if(f1.CPF == f2.CPF || f1.nome == f2.nome){
		return true;
	}
	return false;
}*/
