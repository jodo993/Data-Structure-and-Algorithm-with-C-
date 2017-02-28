// StackAndQueue.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "Stack.h"
#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> listOne;
	Stack item(4);		// Creates stack object
	int num;
	
	for (int i = 0; i < 4; i++)
	{
		std::cout << "Enter number: " << std::endl;
		std::cin >> num;
		item.pushStack(num);
	};
	
	// Call methods
	item.popStack();
	item.stackTop();
	item.stackSize();
    return 0;
}

