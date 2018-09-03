#ifndef STACK_
#define STACK_

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
class Stack{
	private:
		vector<T> dados;
		//
	public:
		Stack(){
		}
		~Stack(){
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
			dados.pop_back();
		}
		void printStack(){
			for(int i = 0; i < (int) dados.size();i++){
				cout << dados[i] << endl;
			}
		}
};
#endif
