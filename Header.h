#pragma once
#include <string>
#include <fstream>
#include <sstream>

class Huffamn
{
private:
	std::string _name;
	std::string _whole;
	char _word;

public:
	// give a file name, return the new number of bits
	// total bits is the sum of all frequency * bitsize entries

	int ProcessFile(std::string filename) {
		_name = filename;
		std::ifstream _infile;
		_infile.open("_name");
		std::string _stuff;

		while (_infile >> _word) {
			_whole = _whole + _word;
		}
		_infile.close();
		return _whole;
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

	void combine(HuffNode _node) {
		std::string _num;
		if (_node->_left != NULL) {
			_num = _num + "0";
			combine(_node->_left);
		}
		if (_node->_right != NULL) {
			_num = _num + "1";
			combine(_node->_right);
		}
	}
};