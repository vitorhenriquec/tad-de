#include "../include/stack.hpp"

int main(){
	Stack<int> s1;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.printStack();
	cout << s1.size() << endl;
	s1.pop();
	cout << s1.size() << endl;
	return 0;
}