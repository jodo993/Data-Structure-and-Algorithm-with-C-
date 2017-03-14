#pragma once

template<typename T>

class BST
{
private:
	class Node
	{
	public:
		Node()
		{
			mLeft = nullptr;
			mRight = nullptr;
			Active = true;
			int height;
		}

		Node(T TVariable)
		{ 
			mLeft = nullptr;
			mRight = nullptr;
			mData = TVariable;
			Active = true;
		}

		T mData; // Putting this first makes it easier to see in the debugger
		Node *mLeft;
		Node *mRight;
		bool Active;
	};
	Node *mRoot;

public:
	BST()
	{
		mRoot = nullptr;
	}

	void Add(T x)
	{
		if (mRoot == nullptr)
		{
			mRoot = new Node(x);
			return;
		}
		Node *searchNode = mRoot;

		while (true)
		{
			if (x == searchNode->mData)
			{
				if (searchNode->Active == true)
					return;

				else if (searchNode->Active == false)
				{
					searchNode->Active = true;
					return;
				}
			}

			if (x > searchNode->mData)
			{
				if (searchNode->mRight != nullptr)
				{
					searchNode = searchNode->mRight;
				}

				else if (searchNode->mRight == nullptr)
				{
					searchNode->mRight = new Node(x);
					return;
				}
			}

			else if (x < searchNode->mData)
			{
				if (searchNode->mLeft != nullptr)
				{
					searchNode = searchNode->mLeft;
				}

				else if (searchNode->mLeft == nullptr)
				{
					searchNode->mLeft = new Node(x);
					return;
				}
			}
		}
	}

	bool Contains(T x)
	{
		if (mRoot == nullptr)
		{
			return false;
		}

		Node *searchNode = mRoot;
		while (true)
		{
			if (x == searchNode->mData)
			{
				if (searchNode->Active == true)
					return true;

				else if (searchNode->Active == false)
					return false;
			}

			if (x > searchNode->mData)
			{
				if (searchNode->mRight != nullptr)
				{
					searchNode = searchNode->mRight;
				}
				else if (searchNode->mRight == nullptr)
				{
					return false;
				}
			}

			else if (x < searchNode->mData)
			{
				if (searchNode->mLeft != nullptr)
				{
					searchNode = searchNode->mLeft;
				}
				else if (searchNode->mLeft == nullptr)
				{
					return false;
				}
			}
		}
	}

	void Remove(T x)
	{
		if (mRoot == nullptr)
		{
			return;
		}

		Node *searchNode = mRoot;

		if (x < searchNode->mData)
			remove(searchNode->left);
		else if (x > searchNode->mData)
			remove(searchNode->right)
		else
			delete searchNode;

		//while (true)
		//{
		//	if (x == searchNode->mData)
		//	{
		//		if (searchNode->Active == true)
		//		{
		//			searchNode->Active = false;
		//			return;
		//		}
		//		else if (searchNode->Active == false)
		//			return;
		//	}

		//	if (x > searchNode->mData)
		//	{
		//		if (searchNode->mRight != nullptr)
		//		{
		//			searchNode = searchNode->mRight;
		//		}

		//		else if (searchNode->mRight == nullptr)
		//		{
		//			return;
		//		}
		//	}

		//	else if (x < searchNode->mData)
		//	{
		//		if (searchNode->mLeft != nullptr)
		//		{
		//			searchNode = searchNode->mLeft;
		//		}

		//		else if (searchNode->mLeft == nullptr)
		//		{
		//			return;
		//		}
		//	}
		//}
	}
	
	// Find height of tree
	int height(Node *node)
	{
		if (node == nullptr)
			return 0;
		return node->height;
	}

	// Move to right
	void moveRight(T x)
	{
		Node *node = x->left;
		Node *node = y->right;

		node->left = x;
		x->height = height(x->right) + 1
	}

	// Move to left
	void moveLeft(T x)
	{
		Node *node = x->right;
		Node *nodeTwo = y->left;

		node->right = x;
		x->height = height(x->left) + 1
	}

	// Check to see if equal balance
	int equalBalance(Node *node)
	{
		if (node == nullptr)
			return;
		else
			return height(node->right) - height(node->left);
	}
};