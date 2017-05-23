#pragma once

template<typename T, T2>

class KDTree
{
private:
	class Node
	{
	public:
		Node()
		{
			mLeft = nullptr;
			mRight = nullptr;
		}

		struct KDThing
		{
			list <T, T2> data;
			mLeft = nullptr;
			mRight = nullptr;
			data = TVariable;
		};
		T data; // Putting this first makes it easier to see in the debugger
		Node *mLeft;
		Node *mRight;
	};
	Node *root;

public:
	KDTree()
	{
		root = nullptr;
	}

	void Add(pair<T,T2>) {
		// If there is nothing, make root a new node
		if (root == nullptr)
		{
			int level = 0	// Keep track of even or odd level x/y
			root = new Node(x);
			return;
		}

		Node *current = root;

		// If the current root is smaller than the new root,
		// Forks, go left or right if less or greater than so recursive
		// Add one to the level
		if (current < current->data) {
			Add(current, level);
			current->left = current->data;
			level++;
		}
		else {		// Go right
			Add(current, level);
			current->right = current->data;
			level++;
		}
		return current;
	}

	bool Contains(pair<T, T2> what) {
		Node* current = root;
		int level = 0;
		while () {
			if (current->data < what->data)

			if (level % 2 == 0 && current->data.first <change here)
		}



	}

	void Remove(pair<T, T2> what){
		// If nothing is there, go back
		if (root == nullptr)
		{
			return NULL;
		}

		Node* current = root;
		int level = what % 2;	// Find level odd or even

		// deleting the node but first find which node has the point
		if (what < current->data) {
			current->left = remove(current->left, what);
			current->data = delete(current->left);
			level--;	// move up a level
		}
		else {
			current->right = remove(current->right, what);
			current->data = delete(current->right);
			level--;
		}
		return current;
	}
};