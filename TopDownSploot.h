#pragma once

template<typename T>

class Splay
{
private:
	class Node
	{
	public:

		T _data;
		Node *_left;
		Node *_right;
		Node *_parent;
		bool Active;

		Node()
		{
			_left = nullptr;
			_right = nullptr;
			Active = true;
		}

		Node(T _t)
		{
			_left = nullptr;
			_right = nullptr;
			_data = TVariable;
			Active = true;
		}
	};
	Node *_root;

public:
	Splay()
	{
		mRoot = nullptr;
	}

	void Add(T x, Node _root) {
		Node _new = NULL;
		Node *search = _root;
		while (true) {
			if (x == search->_root) {
				if (search->Active == true)
					return;
				else if (search->Active == false) {
					search->Active = true;
					return;
				}
			}

			if (x > search->_data) {
				if (search->_right != nullptr)
					search = search->_right;
				else if (search->_right == nullptr) {
					search->_right = new Node(x);
					return;
				}
			}
			else if (x < search->_data) {
				if (search->_left != nullptr)
					search = search->_left;
				else if (search->_left == nullptr) {
					search->_left = new Node(x);
					return;
				}
			}
		}
	}

		//if (_root == nullptr) {
		//	_root = new Node(x);
		//	return;
		//}

		//if (x < _root->x) {
		//	_new->_left - _root->_left;
		//	_new->_right = _root;
		//	_root->_left = NULL;
		//	_root = _new;
		//}
		//else if (x > _root->x) {
		//	_new->_right = _root->_right;
		//	_new->_left = _root;
		//	_root->_right = NULL;
		//	_root = _new;
		//}
		//else
		//	return _root;
		//return _root;

	bool Contains(T x)
	{
		Node *searchNode = _root;

		if (_root == NULL || _root->_data == _data)
			return root;

		if (_root->_data > _data) {
			if (_root _ > _left->_data > _data)
				return _root;
		}

		if (_root->_left->x > x) {
			_root = rotateRight(_root);
		}
		else if (_root->_left->x < x) {
			_root->_left->_right = rotateLeft(_root);
			if (_root->_left->_right != NULL)
				return _root;
		}
	}

	int node rotateRight(T x) {
		struct node *z = x->_left;
		x->_left = z->_right;
		z->_right = x;
		return z;
	}

	int node rotateLeft(T x) {
		struct node *z = x->_right;
		x->_right = z->_left;
		z->_left = x;
		return z;
	}

	void Remove(T x)
	{
		if (_root == nullptr)
			return;
		Node temp = new Node();

		if (x != _root->x)
			return _root;
		else if {
			if (!_root->_left) {
				_temp = _root;
				_root = _root->_right;
				rotateLeft(x);
			}
			else {
				_temp = _root;
				_root->_right = _temp->_right;
				rotateRight(x);
			}
			free(_temp);
			return _root;
		}
	}
};