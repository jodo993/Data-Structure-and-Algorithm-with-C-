// CircusTree.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CircusTree.h"


int main()
{
	BST<float> tree;

	tree.Add(3);
	tree.Add(5);
	tree.Remove(5);
	tree.Contains(3);

    return 0;
}

