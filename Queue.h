#pragma once
class Queue
{
public:
	int *value;
	int front = 0;
	int back = 0;
	int size;

	Queue();
	~Queue();

	void queueFront();
	void queuePush();
	void queuePop();
	int queueSize();
};



