// HeapItOn.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "HeapItOn.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> theVector;

	theVector.push_back(3);
	theVector.push_back(8);
	theVector.push_back(27);
	theVector.push_back(17);
	theVector.push_back(19);

	theVector.Push();

    return 0;
}

