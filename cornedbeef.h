#pragma once

template<typename tKey, typename tValue>

class Hash
{
private:
	class Node
	{
	public:
		// Size of Hash Table
		static const int size = 97;

		// Constructor
		struct element
		{
			tKey = NULL;
			tValue = NULL;
			item* next;
		}

		item* Hash[size];

		// Overloading constructor
		Node(tKey key)
		{
			kData = key;
		}

		// Overloading constructor
		Node(tValue value)
		{
			vData = value;
		}
	};

public:
	// Clear all data
	void Clear()
	{
		// Clear all elements
		for (int i = 0; i < size.length(); i++)
		{
			size[i] = NULL;
		}
	}

	// If data is found
	bool Contains(string tKey)
	{
		string key = tKey;				// Key looking for
		bool doesContain = false;		// Marker to see if found
		string found;					// Points to element

		item* ptr = size[key];

		// While there are still keys to search, keep searching
		while (ptr != NULL)
		{
			if (ptr->key == tKey)
			{
				doesContain = true;
				found = ptr-> tKey
			}
			ptr = ptr->next;
		}
		// If is found, display
		if (doesContain == true)
		{
			std::cout << "Is there." << std::endl;
		}

	}

	// Set new element
	void SetWithKey(string tKey, T tValue)
	{
		int position = 0;		// Position of current element
		int location;			// Location of where element is stored in hash

		// Set the entire map keys and values into memory
		for (int i = 0; i < tKey.length(); i++)
		{
			position = (position + (int)tKey[i])
		}

		location = hash + position;
	}

	// Get an element
	T GetWithKey(string tKey)
	{
		if (next->tKey > tKey)
			return current->vData;
	}

	// Remove an element
	void RemoveKey(string tKey)
	{
		int position = Hash[tKey];

		// Pointers variables
		element* deletion;
		element* one;
		element* two;

		// No found
		if (size[position]->tKey == "empty")
		{
			std::cout << "Not Found" << std::endl;
		}
		// One item match
		else if (size[position]->tData == tKey && size[position]->next == NULL)
		{
			size[position]->name == nullptr;
			size[position]->tKey == nullptr;
		}
		// Match in first item
		else if (size[position]->tData == tKey)
		{
			deletion = size[position];
			size[position] = size[position]->next;
			delete deletion;
			std::cout << "Removed" << std::endl;
		}
		// Match found
		else
		{
			deletion = one;		// Point to item to remove
			one = one->next;	// Points to next item in list
			two->next = one;	// Points to new item

			delete deletion;
		}
	}
};