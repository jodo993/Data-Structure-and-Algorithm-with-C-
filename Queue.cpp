#include "stdafx.h"
#include "Queue.h"
#include <iostream>

Queue::Queue()
{
}

Queue::~Queue()
{
	delete value;
}

void Queue::queueFront()
{
	if (front == 0)
		std::cout << "Empty" << std::endl;
	else
		std::cout << front << std::endl;
}

void Queue::queuePush()
{
	if (((back + 1) % size) == front)
		std::cout << "Full" << std::endl;
	else
		back = (back + 1) % size;
}

void Queue::queuePop()
{
	if (front == back)
		std::cout << "Empty" << std::endl;
	else
		front = (front + 1) % size;
}

int Queue::queueSize()
{
	int size = 0;
	while (!listOne.IsEmpty())
	{
		listOne.Dequeue(i);
		size++;
	}
	return size;
}