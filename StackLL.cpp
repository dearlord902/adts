#include "StackLL.h"

class Stack::Node
{
	public:
	   int data = 0;
	   Node* link = nullptr;
}
	
Stack::~Stack()
{
	while(num_elements>0)
	{
		remove(1);
	}
}

int Stack::size()
{
	return num_elements;
}

void Stack::push(int a)
{
	data.insert(int a, data.size()+1);
}

void Stack::pop()
{
	Node* delPtr;
}

int Stack::top()
{
	return data.get(data.size());
}

void Stack::clear()
{
	data.clear();
}
