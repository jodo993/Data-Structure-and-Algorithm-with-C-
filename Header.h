#pragma once

// not supposed to have template but everything turns red w/o
template<typename T, T2>

class KDTree
{
private:
	class Node
	{
	public:
		Node()
		{
			left = nullptr;
			right = nullptr;
		}

		struct KDThing
		{
			list <T, T2> data;
			left = nullptr;
			right = nullptr;
			data = TVariable;
		};
		T data; // Putting this first makes it easier to see in the debugger
		Node *left;
		Node *right;
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
			current->data = Add(current, level);
			current->left = current->data;
			level++;	// associate level with new node somehow..
		}
		else {		// Go right
			current->data = Add(current, level);
			current->right = current->data;
			level++;
		}
		return current;
	}

	bool Contains(pair<T, T2> what) {
		Node* current = root;
		int level = 0;
		// if root is null, nothing can be found
		if (root == nullptr) {
			return false;
		}
		bool found = true;

		// search for the point to remove
		while (true) {
			if (current->data < what->data) {		// if current data is less than data looking for, look left
				if (level % 2 == 0 && current->data < what->data) {
					if (current->left != nullptr) {		// go left and something is there
						current = current->left;
						Contains(current->left, level + 1); // forks so recursion??
					}
					else
						return false;
				}
				else if (level == 1 && current->data > what->data) {
					if (current->right != nullptr) {	// go right and something is there
						current = current->right;
						Contains(current->right, level + 1);
						level++;
					}
					else
						return false;
				}
			}
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

		// deleting the node but first find which node has the pair
		// recursion if theres two paths
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

	void AllInRange(pair<T, T2> what) {
		Node* current = root;
		// check current to see if is child
		if (current->left != NULL) {
			//  check pair?
		}
		if (current->right != NULL) {
		}

	}
};