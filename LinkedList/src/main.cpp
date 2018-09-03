#include "../include/linkedList.hpp"

int main(){
	LinkedList<int> l ;
	l.insertBegging(2);
	l.insertBegging(3);
	l.insertBegging(4);
	//l->removeEnd();
	l.print();
	return 0;
}