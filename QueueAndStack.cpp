// QueueAndStack.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <list>
#include "Queue.h"

using namespace std;
template <typename T>

int main()
{
	List<T>	listOne;
	listOne.push_front(10);
	listOne.push_front(20);
	listOne.push_front(30);
	listOne.push_front(40);

	listOne.queueFront();
    return 0;
}

