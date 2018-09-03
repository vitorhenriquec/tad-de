#ifndef LLIST_
#define LLIST_

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

template<class T>
class LinkedList{
	private:
		struct Node{
			public:
				T chave;
				Node * next;
				Node * prev;
				Node () = default;
				Node(T _chave):chave(_chave),next(nullptr),prev(nullptr){};

		};
		Node * inicio;
		Node * fim;
		unsigned tam;
	public:
		LinkedList(){
			this->inicio = new Node;
			this->fim = new Node;
			this->inicio->next = this->fim;
			this->fim->prev = this->inicio;
			this->tam = 0;
		}
		~LinkedList(){
			Node * it = inicio->next;
			while(it != this->fim){
				it = it->next;
				delete it->prev;
			}
			delete this->inicio;
			delete this->fim;
		}
		unsigned size(){
			return tam;
		}
		void insertBegging(T chave_){
			Node * novo = new Node(chave_);
			novo->next = this->inicio;
			novo->prev = this->fim;
			this->fim->next = novo;
			this->inicio->prev = novo;
			this->inicio = novo;
			tam+=1;

		}
		void removeEnd(){
			Node * tmp = this->fim;
			this->fim->prev->next = this->inicio;
			this->fim =this->fim->prev;
			this->inicio->prev = this->fim;
			delete tmp;
			tam-=1;
		}
		void print(){
			//cout << "Tam:" << tam<< endl; 
			Node * it = this->inicio;
			while(it->next != this->fim){
				cout << it->chave << endl;
				it = it->next;
			}
		}
};
#endif
