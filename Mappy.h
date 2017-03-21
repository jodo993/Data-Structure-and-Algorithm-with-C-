#pragma once

template <typename T, typename T2>

class Map
{
private:
	class Node
	{
	public:
		{
			Node()
			{
				left = nullptr;
				right = nullptr;
				dataOne = T;
				dataTwo = T2;
			}

			T dataOne;
			T2 dataTwo;
			Node left;
			Node right;
		}
	};
	// Map of pairs of herp to derp
	Map<std::pair<T, T2>> mapperz;

	// Find this key and get rid of it
	void Erase(T)
	{
		if (T == nullptr)
			return;
		Erase(T->left);
		Erase(T->right);
		delete(T);
	}

	// Iterator to smallest item
	int iterator Begin()
	{
		for (std::pair<T, T2>::iterator it = mapperz.begin(); it != mapperz.end(); ++i)
			return 0;
	}
	
	// Iterator PAST largest item (Remember, Begin and End are different from Front and Back)
	int iterator End()
	{
		return it(left->T);
	}

	// How many are in here
	int Size()
	{
		for (mapperz<T, T2>::iterator it = mapperz.begin(); it != mapperz.end(); ++it)
		{
			size = size + it->left.size();
			size = size + it->right.size();
		}
		return size;
	}

	// Are there 0 here?
	bool IsEmpty()
	{
		if (mapperz == NULL)
			return false;
		else if (iterator != mapperz.end())
			return true;
	}

	// Erase everything
	void Clear()
	{
		for (iterator it = mapperz.begin(); !iterator IsEqual(mapperz.end); iterator = iterator.Next())
			delete(mapperz.begin());
	}

	// Here is a key, get me the value
	T2 GetWithKey(T)
	{
		if (dataOne == left)
			return T;
		return dataOne->right;
	}

	// Set this value for this key
	void SetWithKey(T, T2)
	{

	}
};

