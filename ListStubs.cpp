// ListStubs.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include "ListStubs.h"

template<typename T>
int main()
{
	struct ListNode
	{
		ListNode *mPrev;
		T mData;
		ListNode *mNext;
	};

	ListNode <int> node(5);
    return 0;
}

