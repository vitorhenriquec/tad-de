#include "../include/circulararray.hpp"

int main(){
	CircularArray<int> c;
	c.insertionEnd(2);
	c.insertionEnd(1);
	c.removeEnd();
	c.print();
	return 0;
}