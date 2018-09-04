#include "../include/hashtable.hpp"

int main(){
	OpenHash<int> s1(5);
	s1.add(2);
	s1.add(3);
	s1.add(4);
	s1.del(2);
	s1.print();
	return 0;
}