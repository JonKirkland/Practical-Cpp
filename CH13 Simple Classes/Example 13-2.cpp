#include <cassert> //lets us assert
#include <iostream>
#include <cstdlib>

const int STACK_SIZE = 100;
class stack {
private:
	int count;
	int data[STACK_SIZE]; //stack size of 100

public:
	//definding function prototypes: 
	
	
	//initialize the stack
	void init();

	//push an item to the stack
	void push(const int item);

	//pop an item from the stack
	int pop();
};


inline void stack::init(){
	//in the structure version, stack must be passed in as a parameter, since this function
	//is a part of the stack class, can access the member variables directly.
	count = 0;
}

inline void stack::push(const int item) {
	assert((count >= 0) && (count < sizeof(data) / sizeof(data[0])));
	data[count] = item;
	++count;
}

inline int stack::pop() {
	//decrease stack by 1
	--count;
	assert((count >= 0) && (count < sizeof(data) / sizeof(data[0])));
	//return top value
	return (data[count]);
}

//test the stack
int main() {
	stack a_stack; //stack we want to use
	a_stack.init();

	//push values to the stack
	a_stack.push(1);
	a_stack.push(2);
	a_stack.push(3);

	//pop item from stack
	std::cout << "Expect a 3->" << a_stack.pop() << '\n';
	std::cout << "Expect a 2->" << a_stack.pop() << '\n';
	std::cout << "Expect a 1->" << a_stack.pop() << '\n';
	return(0);
}