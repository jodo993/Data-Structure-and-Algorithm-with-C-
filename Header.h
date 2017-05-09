#pragma once
#include <string>
#include <fstream>
#include <sstream>

class Huffamn
{
private:
	std::string name;

public:
	// give a file name, return the new number of bits
	// total bits is the sum of all frequency * bitsize entries

	int ProcessFile(std::string filename) {
		name = filename;
		std::ifstream _infile;
		_infile.open("filename");
		std::string _stuff;

		while (!_infile.eof()) {
			_infile >> _stuff;
		}
	}

	int buildNode(char _data, int _nodeWeight) {
		HuffNode* temp = new HuffNode;
		temp->_data = _data;
		temp->_nodeWeight = _nodeWeight;
		temp->_right = NULL;
		temp->_left = NULL;
		return temp;
	}

private:
	unordered_map<char, Huffnode*> _table;

	struct HuffNode
	{
		HuffNode *_left;
		HuffNode *_right;
		char _data;
		int _nodeWeight;
		std::string _finalCode;
		HuffNode();
	};

	~HuffNode() {
		delete left;
		delete right;
	}

};