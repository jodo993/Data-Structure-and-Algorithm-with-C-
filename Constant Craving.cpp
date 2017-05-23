// Constant Craving.cpp : Defines the entry point for the console application.
//
#include "Header.h"
#include "stdafx.h"

int main()
{
	// pairs
	int pairs[][] = { {2,3}, {3,5}, {3,2}, {1,7}, {6,9}, {5,8} };

	struct Node* root = nullptr;
	// add pairs into tree
	for (int i = 0; i < pairs.length; i++)
		root = Add(root, pairs[][]);
    return 0;
}

