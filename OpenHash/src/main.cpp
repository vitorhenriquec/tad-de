#include "../include/openhash.hpp"

int main(){
	chainedHashtable<int> s1(5);
	s1.add(2);
	cout << "Encontrou: " << s1.findEl(2) << endl;
	s1.del(2);
	cout << "Tam: " << s1.size() << endl;
	return 0;
}