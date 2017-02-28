#pragma once
class Stack
{
public:
	Stack();
	Stack(int size);
	~Stack();

public:
	int size;
	int top;
	int *data;

	void pushStack(int data);
	int popStack();
	bool stackTop();
	int stackSize();
};

