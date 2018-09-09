#include "../include/hashtable.hpp"

int main(){
	chainedHashtable<int> s1(5);
	s1.add(2);
	s1.add(-80);
	s1.add(1000);
	s1.add(7);
	s1.add(13);
	s1.add(11);
	s1.add(19);
	s1.add(5);
	s1.add(12);
	//cout << "Encontrou: " << s1.findEl(-100) << endl;
	s1.del(7);
	cout << "Tam: " << s1.size() << endl;
	return 0;
}