// SortinIsBorin.cpp : Defines the entry point for the console application.
#include "sortinBoring.h"
#include "stdafx.h"
#include <iostream>
#include <vector>

int main()
{
	// Creating the vector
	std::vector<int> v = { 7, 5, 16, 8 };

	// Add more
	v.push_back(24);
	v.push_back(2);

	for (int n : v)
	{
		std::cout << n << " ";
	}
	std::cout << std::endl;

	Sort(v);
	//int hi = v.size();
	//std::cout << hi << std::endl;
    return 0;
}

