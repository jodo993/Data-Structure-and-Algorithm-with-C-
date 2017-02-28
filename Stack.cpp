#include "stdafx.h"
#include "Stack.h"
#include <iostream>
#include <list>

Stack::Stack()
{
}

Stack::Stack(int mSize)
{
	size = mSize;
	top = -1;
}

//Stack::Stack(const Stack& s)
//{
//	data = new int[s.maxSize];
//	for (int i = 0; i < s.top; i++)
//	{
//		this->data[i] = s.data[i];
//	}
//	this->top = s.top;
//}

Stack::~Stack()
{
	delete[]data;
}

void Stack::pushStack(int data)
{
	if (top == size - 1)
		std::cout << "Full." << std::endl;
	else
		++top = data;
}

int Stack::popStack()
{
	if (top == NULL)
		std::cout << "Stack empty." << std::endl;
	else
	{
		top--;
		return top;
	}
}

bool Stack::stackTop()
{
	if (top == NULL)
		return false;
	else
		return true;
}

int Stack::stackSize()
{
	int i = 0;
	for (i; i < top; i++)
	{
		top = top - 1;
	}
	return i;
}