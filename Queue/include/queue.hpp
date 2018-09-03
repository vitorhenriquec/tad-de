#ifndef QUEUE_
#define QUEUE_

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include<vector>
using std::vector;

/*#include<list>
using std::list;
*/

template<class T>
class Queue{
	private:
		vector<T> dados;
		//list<t> dados;
	public:
		Queue(){
		}
		~Queue(){
		}
		unsigned size(){
			return dados.size();
		}
		const T & peek(){
			return dados.back();
		}
		void push(T chave){
			dados.push_back(chave);
		}
		void pop(){
			dados.erase(dados.begin())
			//dados.pop_front();
		}
		void printStack(){
			for(int i = 0; i < (int) dados.size();i++){
				cout << dados[i] << endl;
			}
		}
};
#endif
