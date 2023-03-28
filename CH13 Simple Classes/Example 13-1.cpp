#include <cassert> //lets us assert
#include <iostream>
#include <cstdlib>

const int STACK_SIZE = 100;
//the stack:
struct stack {
	int count;
	int data[STACK_SIZE];
};

inline void stack_push(struct stack& the_stack, const int item) //store item on stack and increase data count
{
	assert((the_stack.count >= 0) && (the_stack.count < sizeof(the_stack.data) / sizeof(the_stack.data[0])));

	the_stack.data[the_stack.count] = item;
	++the_stack.count;
	//this program doesn't do a good job of checking for stack overflow
}

//popping removes top item and decreases the number of items in the stack
inline int stack_pop(struct stack& the_stack)
{
	//decrease stack by one
	--the_stack.count;
	assert((the_stack.count >= 0) && (the_stack.count < (sizeof(the_stack.data) / sizeof(the_stack.data[0]))));
	//dont need to remove data as it will be overwritten on next push
	//return the top value
	return(the_stack.data[the_stack.count]);
}

//need to initialize the stack
inline void stack_init(struct stack& the_stack)
{
	the_stack.count = 0;
	//dont need to initialize the data field here to 0, as since the elements of the data operation are overwritten by the push operation
}


int main()
{
	//short routine to test the stack
	struct stack a_stack; //stack we want to use
	
	stack_init(a_stack);

	//push 3 values to the stack
	stack_push(a_stack, 1);
	stack_push(a_stack, 2);
	stack_push(a_stack, 3);

	//pop items from a stack
	std::cout << "expect 3 ->" << stack_pop(a_stack) << '\n';
	std::cout << "expect 2 ->" << stack_pop(a_stack) << '\n';
	std::cout << "expect 1 ->" << stack_pop(a_stack) << '\n';
	return(0);
}

