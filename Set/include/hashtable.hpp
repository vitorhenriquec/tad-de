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
/*#include<list>
using std::list;
*/

template<class T>
class chainedHashtable{
	private:
		vector<list<T>> buckets;
		unsigned _size;
		//
	public:
		chainedHashtable(unsigned size):buckets(size),_size(0){}
		~chainedHashtable(){
		}
		unsigned size(){
			return _size;
		}
		bool empty(){
			return !size();
		}
		unsigned capacity(){
			return buckets.size();
		}
		unsigned hash(const T & value){
			return value >> 1;
		}
		void add(const T & value){
			unsigned idx = hash(value)%capacity();
			buckets[idx].push_back(value);
			_size+=1;
		}

		void del(const T & value){
			unsigned idx = hash(value)%capacity();
			auto pos = find(buckets[idx].begin(),buckets[idx].end(),value);
			if(pos != buckets[idx].end()){
				buckets[idx].erase(pos);
				_size-=1;
			} 
		}

		bool findEl(const T & value){
			unsigned idx = hash(value)%capacity();
			const auto & pos = find(buckets[idx].begin(),buckets[idx].end(),value);
			return pos != buckets[idx].end();
		}
};
#endif
