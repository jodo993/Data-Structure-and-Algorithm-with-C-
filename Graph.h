#pragma once
#include <string>
#include<list>
#include<unordered_map>
#include<iostream>

class Graph {
	struct Edge;
	struct Vertex {
		std::string _data;		// Could make the data a T, but it's an extra step we don't really need.
		std::list<Edge*> _ins;
		std::list<Edge*> _outs;
	};
	struct Edge {
		int _weight;
		Vertex *_from;
		Vertex *_to;
	};
	std::unordered_map<std::string, Vertex *> _mainData;

public:
	Graph()	{
	}
	~Graph(){ 
	}
	void Add(std::string nodeName){
		if( _mainData.find(nodeName) != _mainData.end() )// Reject dupes
			return;
		Vertex *newVert = new Vertex();
		newVert->_data = nodeName;
		_mainData[nodeName] = newVert;
	}
	void Remove(std::string nodeName) {
		if( _mainData.find(nodeName) == _mainData.end() )// Stop if we don't have it
			return;
		for( auto inIter : _mainData[nodeName]->_ins ) {// Since the vertex is going, all edges in and out are going, so tell the vertices at the other end
			inIter->_from->_outs.remove(inIter);
			delete inIter;
		}
		for( auto outIter : _mainData[nodeName]->_outs ) {
			outIter->_from->_outs.remove(outIter);
			delete outIter;
		}
		delete _mainData[nodeName];
		_mainData.erase(nodeName);
	}
	void Connect(std::string from, std::string to) {// "Overloading" like this prevents copypaste, and the BestDistance method needs weights
		Connect(from, to, 1);
	}
	void Connect(std::string from, std::string to, int weight) {
		if( _mainData.find(from) == _mainData.end() || _mainData.find(to) == _mainData.end() ) // Check they both exist
			return;

		Edge *newEdge = new Edge();			// One edge exists per arrow on the white board.  Each vertex has a pointer to it
		newEdge->_weight = weight;
		newEdge->_from = _mainData[from];
		newEdge->_to = _mainData[to];

		_mainData[from]->_outs.push_back(newEdge);
		_mainData[to]->_ins.push_back(newEdge);
	}
	void Disconnect(std::string from, std::string to) {
		if( _mainData.find(from) == _mainData.end() || _mainData.find(to) == _mainData.end() )
			return;
		for( auto inIter : _mainData[to]->_ins ) {// Disconnecting leaves the vertices in place, but deltes the edge after removing it
			if( inIter->_from == _mainData[from] ) {
				inIter->_from->_outs.remove(inIter);
				_mainData[to]->_ins.remove(inIter);
				delete inIter;
				break;
			}
		}
	}
	void Dump()	{
		for( auto mapIter : _mainData ) {
			std::cout << mapIter.first << ") Ins:";
			for( auto inIter : mapIter.second->_ins )
				std::cout << inIter->_from->_data << " ";
			std::cout << "Outs: ";
			for( auto outIter : mapIter.second->_outs )
				std::cout << outIter->_to->_data << " ";
			std::cout << std::endl;
		}
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
	}

	int search(int start, int end) {
		while (!tree.empty()) {
			int currentFlow = tree.front();
		}
	}

	int MaxFlow(int T, int T) {
		int _start = T;
		int _end = T;
		int _totalFlow = 0;
		int _currentFlow = 0;
		int _maxFlow = 0;
		while (true) {
			int flow = search(_start, _end);

			if (flow == 0)
				break;
			_maxFlow = _maxFlow + flow;
			int currentFlow = _end;

			while (currentFlow != _start) {
				int first = currentFlow;
			}
		}
		return _totalFlow;
	}

};

