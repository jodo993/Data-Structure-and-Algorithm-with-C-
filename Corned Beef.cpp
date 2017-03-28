// Corned Beef.cpp : Defines the entry point for the console application.
//

#include <map>
#include <vector>
#include <string>
#include "stdafx.h"
#include "cornedbeef.h"

int main()
{
	std::map<std::string, std::string> myMap;		// Declare a map
	
	myMap[0] = "Tom", "one";
	myMap[1] = "Tim", "two";
	myMap[2] = "Tam", "twa";
	myMap[3] = "Tum", "twe";

	myMap.Contain("Tum");
	myMap.SetWithKey("Tom", "one");
	myMap.clear();

    return 0;
}

