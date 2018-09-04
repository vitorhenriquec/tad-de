#include"../include/biblioteca.hpp"

Biblioteca::Biblioteca(){
	acervo.push_back((Midias *) new Livro("1","Some factors modifying the expression of human strength","Ikai, Michio, and Arthur H. Steinhaus","Journal of Applied Physiology 16","XXW-123",1961));
	acervo.push_back((Midias *) new Livro("2","Oral carbohydrate rinse: placebo or beneficial?","Jeukendrup, Asker E","Current sports medicine reports","XXW-124",2013));
	acervo.push_back((Midias *) new DVD("3","X: Seoul","Han T","120min","Livre",2017));
	acervo.push_back((Midias *) new DVD("4","Marvel - Vingadores: Guerra Infinita","Anthony Russo and Joe Russo","180min","Livre",2018));
	acervo.push_back((Midias *) new CD("5","Fear and Tears","James White",2018,"Sony Music Entertainment",17));
	acervo.push_back((Midias *) new CD("6","X","X",2005,"Columbia Records",5));
}

Biblioteca::~Biblioteca(){

}

void Biblioteca::adicionarMidia(Midias *m){
	bool existe = 0;
	for(int i = 0; i < (int) acervo.size(); i++){
		if(acervo[i]->getTipo() == "Livro" && m->getTipo() == "Livro"){
			if( *((Livro*) acervo[i]) == *((Livro*) m)){
				existe = 1;
				break;
			}
		}
		else if(acervo[i]->getTipo() == "CD" && m->getTipo() == "CD"){
			if( *((CD*) acervo[i]) == *((CD*) m)){
				existe = 1;
				break;
			}
		}
		else if(acervo[i]->getTipo() == "DVD" && m->getTipo() == "DVD"){
			if( *((DVD*) acervo[i]) == *((DVD*) m)){
				existe = 1;
				break;
			}
		}
	}
	if(!existe){
		acervo.push_back(m);
		cout << "" << endl;
		cout << "Elemento adicionado!" << endl;
		cout << "" << endl;
	}
	else{
		cout << "" << endl;
		cout << "Impossivel adiconar, elemento já existente!" << endl;
		cout << "" << endl;
	}
	//cout << "A:" << (int) acervo.size() << endl;
}

void Biblioteca::removerMidia(string id){
	bool existe = 0;
	for(int i = 0; i < (int) acervo.size(); i++){
		if(acervo[i]->getId() == id){
			existe = 1;
			acervo.erase(acervo.begin()+i);
			cout << "" << endl;
			cout << "Midia removida com sucesso do acervo!" << endl;
			cout << "" << endl;
			break;
		}
	}
	if(!existe){
		cout << "" << endl;
		cout << "Midia com ID=" << id << "não encontrada" << endl;
		cout << "" << endl;
	}
}

void Biblioteca::editarMidia(string id){
	bool existe = 0;
	for(int i = 0; i < (int) acervo.size(); i++){
		if(acervo[i]->getId() == id){
			cout << "" << endl;
			cout << " ---- Reescrita da midia -------" << endl;
			if(acervo[i]->getTipo() == "Livro"){
				existe = 1;
				cout << "Midia : Livro" << endl;
				cin >> *((Livro *) acervo[i]);
			}
			else if(acervo[i]->getTipo() == "CD"){
				existe = 1;
				cout << "Midia : CD" << endl;
				cin >> *((CD *) acervo[i]);
			}
			else if(acervo[i]->getTipo() == "DVD"){
				existe = 1;
				cout << "Midia : DVD" << endl;
				cin >> *((DVD *) acervo[i]);
			}
			break;
		}
	}

	if(!existe){
		cout << "" << endl;
		cout << "Midia com ID = " << id << "não encontrada!" << endl;
		cout << "" << endl;
	}
}

void Biblioteca::verAcervo(){
	//Midias *m = nullptr;
	Livro *l = nullptr;
	CD *c = nullptr;
	DVD *d = nullptr;

	int quant = (int) acervo.size();

	if(quant){
		cout << "" << endl;
		cout << "Não há midias registradas!" << endl;
		cout << "" << endl;
	}
	else{
		cout << "" << endl;
		cout << "---- Midias no Acervo ----" << endl;
		for(int i = 0; i < (int) acervo.size(); i++){
			if(acervo[i]->getTipo() == "Livro"){
				l = (Livro *) acervo[i];
				cout << *l;
				cout << "" << endl;
			}
			else if(acervo[i]->getTipo() == "CD"){
				c = (CD *) acervo[i];
				cout << *c;
				cout << "" << endl;
			}
			else if(acervo[i]->getTipo() == "DVD"){
				d = (DVD *) acervo[i];
				cout << *d;
				cout << "" << endl;
			}
		}
		cout << "" << endl;
	}
}

void Biblioteca::verEstatisticas(){
	int qtdLivro = 0, qtdCD = 0, qtdDVD = 0;

	for(int i = 0; i < (int) acervo.size(); i++){
		if(acervo[i]->getTipo() == "Livro"){
			qtdLivro++;
		}
		else if(acervo[i]->getTipo() == "CD"){
			qtdCD++;
		}
		else if(acervo[i]->getTipo() == "DVD"){
			qtdDVD++;
		}
	}

	cout << "" << endl;
	cout << "------ Estatisticas do Acervo -----" << endl;
	cout << "Há no acervo ..." << endl;
	cout << "> " << qtdLivro << " Livro(s)" << endl;
	cout << "> " << qtdCD << " CD(s)" << endl;
	cout << "> " << qtdDVD << " DVD(s)" << endl;
	cout << "" << endl;
}

/*istream& operator>>(istream &i, Biblioteca &f){
	f.cargo = "Biblioteca";
	cout << "Nome:" << endl:
	i >> f.nome >> f.salario >> f.CPF >> f.senha >> f.numeroDeFuncionariosGerenciados;
	f->cargo="Biblioteca";
	cout << "Nome:" << endl;
	i >> f.nome;
	cout << "Salario:" << endl;
	i >> f.salario;
	cout << "CPF:" << endl;
	i >> f.CPF;
	cout << "Senha:" << endl;
	i >> f.senha;
	cout << "Numero de Funcionários:" << endl;
	i >> f.numeroDeFuncionariosGerenciados;
	
	return i;
}

ostream& operator<<(ostream &o, const Biblioteca &f){
	o << "Cargo:" << f.cargo << endl;
	o << "Nome: " << f.nome << endl;
	o << "Salario: " << f.salario << endl;
	o << "CPF: " << f.CPF << endl;
	o << "Senha: " << f.senha << endl;
	o << "Número de Funcionários: " << f.numeroDeFuncionariosGerenciados << endl;
	return o;
}*/
