#pragma once

template<typename T, typename M>
class Heap {
private:
	int front = -1;
	int end = -1;
public:
	void Push(T, int)
	{
		front->end->1;

		front = 1;
		end = 1;
	}

	T Front()
	{
		return front;
	}

	void Pop()
	{
		if (size == 0)
			return;
		else if (front == end) {
			front->end - 1;
			delete front;
		}
		else
			front->front + 1;

	}

	int Size()
	{

	}

	bool IsEmpty()
	{
		if (front == -1 && end == -1)
			return true;
		else
			return false;
	}
};