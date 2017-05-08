#pragma once

class Huffamn
{
private:
public:
	// give a file name, return the new number of bits
	// total bits is the sum of all frequency * bitsize entries

	int ProcessFile(std::string filename);

private:
	unordered_map<char, Huffnode*> _table;

	struct HuffNode
	{
		HuffNode *_left;
		HuffNode *_right;
		char _data;
		int _nodeWeight;
		std::string _finalCode;
	};

};