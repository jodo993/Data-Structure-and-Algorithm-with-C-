// GraphStart.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Graph.h"
#include <iostream>

int main()
{
	Graph myGraph;
	myGraph.Add("A");
	myGraph.Add("B");
	myGraph.Add("C");
	myGraph.Add("D");
	myGraph.Add("E");
	myGraph.Add("F");
	myGraph.Add("G");

	myGraph.Connect("A", "B");
	myGraph.Connect("A", "C");
	myGraph.Connect("B", "D");
	myGraph.Connect("C", "F");
	myGraph.Connect("C", "G");
	myGraph.Connect("D", "E");
	myGraph.Connect("E", "F");
	myGraph.Connect("F", "G");

	myGraph.Dump();

	myGraph.Disconnect("A", "B");
	myGraph.Disconnect("D", "E");

	myGraph.Dump();

	system("pause");

	return 0;
}

