#ifndef CIRCUL_
#define CIRCUL_

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

template<class T>
class CircularArray{
	private:
		vector<T> dados;
		int _capacity,_offset,_size;
	public:
		CircularArray(){
			_capacity = 12;
			_size = 0;
			_offset = 0;
			for(int i = 0 ; i < _capacity;i++){
				dados.push_back((T)0);
			}
		}
		~CircularArray(){
		}
		int capacity(){
			return _capacity;
		}		
		int size(){
			return _size;
		}
		bool full(){
			return size() == capacity();
		}
		bool empty(){
			return size() == 0;
		}
		void insertionEnd(T el){
			if(full()) return;
			dados.at((this->_offset + size())%capacity()) = el;
			this->_size+=1;
		}
		void insertionBegging(T el){
			if(full()) return;
			this->_offset = (this->_offset + 1)%capacity();
			this->_size+=1;
			dados.at(this->_offset) = el;
		}
		void removeEnd(){
			if(empty()) return;
			dados.at(this->_offset) = 0;
			_size-=1;
		}		
		void removeBegging(){
			if(empty()) return;
			dados.at(this->_offset) = 0;
			_size-=1;
			this->_offset = (this->_offset - 1)%capacity(); 
		}
		void print(){
			if(empty()) return;
			for(int i = 0; i < capacity(); i++){
				cout << dados.at(i)<< endl;
			}
		}
};
#endif
