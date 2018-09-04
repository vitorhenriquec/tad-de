#include<iostream>
using namespace std;

#include"../include/biblioteca.hpp"
#include"../include/midias.hpp"
#include"../include/livro.hpp"
#include"../include/cd.hpp"
#include"../include/dvd.hpp"

int main(){
	Biblioteca b;
	Midias *m = nullptr;
	Livro *l = nullptr;
	CD *c = nullptr;
	DVD *d = nullptr;
	string id;
	int op,op1;
	do{
		cout << "----------- MENU PRINCIPAL ----------" << endl;
		cout << "1 - Adicionar ao acervo" << endl;
		cout << "2 - Remover midia" << endl;
		cout << "3 - Visualizar o acervo" << endl;
		cout << "4 - Editar mídia do acero" << endl;
		cout << "5 - Ver estatísticas do acervo" << endl;
		cout << "0 - Sair" << endl;
		cin >> op;
		if(op == 1){
			do{
				cout << "----------- ADIÇÃO ----------" << endl;
				cout << "1 - Livro" << endl;
				cout << "2 - CD" << endl;
				cout << "3 - DVD" << endl;
				cout << "0 - Voltar" << endl;
				cin >> op1;
				cout << "" << endl;
				cout << "Obs: Não serão adicionadas midias exatamente iguais" << endl;
				switch(op1){
					case 1:
						m = new Livro;
						l = (Livro*) m;
						cin >> *l;
						b.adicionarMidia(l);
					break;
					case 2:
						m = new CD;
						c = (CD *) m;
						cin >> *c;
						b.adicionarMidia(c);
					break;
					case 3:
						m = new DVD;
						d = (DVD *) m;
						cin >> *d;
						b.adicionarMidia(d);
					break;
				}
			}while(op1!=0);
		}
		else if(op == 2){
			cout << "----------- REMOÇÃO ----------" << endl;
			cout << "Identificador da mídia" << endl;
			cin >> id;
			b.removerMidia(id);
		}
		else if(op == 3){
			cout << "----------- VISUALIZAÇÃO ----------" << endl;
			b.verAcervo();
		}
		else if(op == 4){
			cout << "----------- EDIÇÃO ----------" << endl;
			cout << "Identificador da mídia" << endl;
			cin >> id;
			b.editarMidia(id);
		}
		else if(op == 5){
			cout << "----------- ESTATÍSTICA ----------" << endl;
			b.verEstatisticas();
		}
	}while(op!=0);
	delete[] m;
	return  0;
}