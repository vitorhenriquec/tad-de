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

#include "hashtable.hpp"
/*#include<list>
using std::list;
*/

template<class T>
class Set{
	private:
		chainedHashtable<T> data;
		// openHashTa
	public:
		Set(){

		}
		~Set(){

		}
		unsigned size(){
			return data.size();
		}
		void add(const T & value){
			data.add(value);
		}
		void del(const T & value){
			data.del(value);
		}
};
#endif
