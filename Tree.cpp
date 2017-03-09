// Tree.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "Tree.h"
#include <iostream>

using namespace std;

int main()
{
	Tree<int> test;
	// Add nodes
	test.Add(8);
	test.Add(3);
	test.Add(9);

	// Remove node
	test.Remove(3);

	// Search for node
	test.Contains(9);

	test.Dump();

    return 0;
	system("pause");
}