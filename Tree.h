#pragma once
#include <iostream>
/*
Basic binary search tree with private node class and core contract functions.
Add and Remove and Contains must be done with loops, not recursion.

We won't be balancing trees until next week, so Remove can go ahead and just mark a node as "Dead".
That is, the node stays there so it can route numbers left and right, but it doesn't count as being in
the tree if you search for it.

*/
template <typename T>	// T must respond to < operator
class Tree
{
	struct Node
	{
		T data;
		Node *left;
		Node *right;
		bool dead;		// For remove
	};
	Node *head;			// Root

public:
	Tree()	// Initializes member variables
	{
		Node *newNode = new TreeNode;
		left = NULL;
		right = NULL;
		//dead = false;
		head = NULL;
	}

	Tree(const Tree &other)
	{
		if (other == NULL)
			return NULL;
		for (other.data != NULL)
		{
			Node *newNode(other->data);
		}
	}

	Tree & operator = (const Tree & other)
	{

	}

	~Tree()
	{	// Destroys node
		if (left != NULL)
			delete left;
		if (right != NULL)
			delete right;
	}

	template <typename T>
	void Add(T what)
	{
		TreeNode *addNode = new TreeNode(what);
		addNode->what = what;
		addNode->left = NULL;
		addNode->right = NULL;

		Node *current;		// Current address position of node
		Node *root;			// Start of tree address

		// Nothing at head make node the root
		if (head == NULL)
		{
			head = addNode;
		}
		else
		{
			current = head;
		}
		// While head is not empty, add node to right or left if greater than prev
		while (head != NULL)
		{
			if (what > addNode->what)
			{
				current = current->right;
				if (current == NULL)
				{
					root->right = addNode;
				}
			}
			else
			{
				current = current->left;
				if (current == NULL)
				{
					root->left = addNode;
				}
			}
		}
	}

		template <typename T>
		void Remove(T what)
		{
			// Tree *remove = head;
			TreeNode *removeNode = new TreeNode(what);

			if (head == NULL)
				std::cout << "Nothing to do." << std::endl;
			else			// If dead is true, node is null
			{
				if (head == removeNode)
				{
					dead == true;
					if (dead)
						removeNode == nullptr;
				}
			}
		}

		template <typename T>
		bool Contains(T what)
		{
			TreeNode *search = head; // Prev Root
			if (search == nullptr)
				return false;
			while (search->what != what)	// Return null if search is not found
			{
				if (search == what)
					return (what = what->head)
				else if (what < search->what)
					return(search = search->right);
				else if (what > search->what)
					return (search = search->left);
				else
					return search = NULL;
			}
		}
		string Dump()
		{
			TreeNode *mCurrent = head;
			if (head == NULL)
				std::cout << "Empty" << std::endl;
			else
			{
				if (mCurrent->left != NULL)
				{
					std::cout << mCurrent << std::endl;
					dump();
				}
			}
		}
};
