#ifndef STACK_
#define STACK_

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include<vector>
using std::vector;

#include<list>
using std::list;

#include <algorithm>    // std::find
using std::find;

#include <string>
using std::string;
using std::to_string;

#include <math.h>
/*#include<list>
using std::list;
*/

template<class T>
class OpenHash{
	private:
		vector<T> container;
		vector<bool> empty,deleted;
		unsigned _size;
		unsigned probing(unsigned start, unsigned attempt){
			return (unsigned) (start + pow(attempt,_probing))%capacity(); 
		}
		//
	public:
		typedef enum{LINEAR = 1, QUADRATIC = 2} probing_options;
	private:
		probing_options _probing;
	public:
		OpenHash(){
			_size = 0;
		}
		OpenHash(unsigned size = 5, probing_options probing = LINEAR):container(size),empty(size,true),deleted(size,false),_size(0),_probing(probing){}
		~OpenHash(){
		}
		unsigned size(){
			return _size;
		}
		unsigned capacity(){
			return container.size();
		}
		unsigned hash(const T & value){
			return value >> 1;
		}

		void print(){
			for(unsigned i = 0; i < capacity(); i++){
				cout << (empty[i] ? "-1" : to_string(container[i])) << endl;
			}
			cout <<  "" << endl;
		}

		void add(const T & value){
			unsigned idx = hash(value)%capacity();
			unsigned start = idx, attempt = 0;

			do{
				idx = probing(start,attempt++);
				if(empty[idx]){
					container[idx] = value;
					empty[idx] = deleted[idx] = false;
				}
			}while(!empty[idx] && (idx!= start || attempt == 1) && attempt < capacity());

			/*buckets[idx].push_back(value);
			_size+=1;*/
		}

		typename vector<T>::iterator get(const T& value){
			unsigned idx =hash(value)%capacity();
			unsigned start = idx, attempt = 0;
			do{
				idx = probing(start,attempt++);
				if(!empty[idx] && container[idx] == value) return container.begin() + idx;
			}

			while((!empty[idx] || deleted[idx]) && (idx!= start || attempt == 1) && attempt < capacity());
			return container.end();
		}

		void del(const T & value){
			auto pos = get(value);
			if(pos == container.end())
				return;
			unsigned idx = pos - container.begin();
			empty[idx] = true;
			deleted[idx] = true;
			_size-=1;
		}

		bool findEl(const T & value){
			return get(value) != container.end();
		}
};
#endif
