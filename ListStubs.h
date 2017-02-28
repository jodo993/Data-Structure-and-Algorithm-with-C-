#pragma once

/*
List -> Constructor, Destructor, Push, Pop, and Get for Front and Back, Size, Clear, Erase
Node
iterator
GetData, Next, IsEqual (Begin and End needed for iterators)
const_iterator
GetData, Next, IsEqual
*/

template<typename T>
class List
{
private:
	// ListNode
	class ListNode
	{
	public:
		ListNode(T input)
		{
			mData = input;
		}
		~ListNode();
		ListNode::~ListNode()
		{
			cout << "Destroyed" << endl;
		}
		
		T mData; // Putting this first makes it easier to see in the debugger
		ListNode *mPrev;
		ListNode *mNext;
	};

public:
	// ConstIterator
	class ConstIterator
	{
		// Even though having vanilla iterator inherit from the const one sounds hinky, it is actually the universal standard.  It does help some difficult bits.
		// Maybe if they both had a VanillaIterator?  Well, there are actually a set of flags in the system's iterator that does stuff like that.
		// I am intentionally not naming this const_iterator so it doesn't look like I am using those system flags.
	public:
		ConstIterator()
			ConstIterator(const ListNode *tStart)
			const T& GetData() const
			void Next()
			bool IsEqual(const ConstIterator &rhs) const
	protected:
		ListNode *mCurrent;
	};
	// Iterator
	class Iterator : public ConstIterator
	{
	public:
		Iterator(ListNode *tStart)
			T& GetData()
	};

	// List
	List()

		void PushFront(T tData)
		void PushBack(T tData)
		void PopFront()
		void PopBack()
		T& Front() const
		T& Back() const
		int Size() const
		void Clear()
		void Erase(Iterator tWhat)
		Iterator Begin()
		Iterator End()
		ConstIterator Begin() const
		ConstIterator End() const
private:
	ListNode *mHead;
	ListNode *mTail;
	int mSize;
	static T sUndefinedT;// See Front for details.
};

template<typename T>
T List<T>::sUndefinedT;

// Add to beginning of list
template<typename T>
void ListNode::PushFront(T tData)
{
	ListNode *newNode;
	newNode = new ListNode;

	if (mHead == NULL)
	{
		mHead = newNode;
		mTail - newNode;
	}
	else
	{
		mHead->mPrev = new ListNode(tData);
		mHead = mHead->mPrev;
		mHead = newNode;
	}
	++mSize;
}

// Add to end of list
template<typename T>
void ListNode::PushBack(t Data)
{
	if (mTail == NULL)
	{
		mTail = mTail = new ListNode(tData);
	}
	else
	{
		mTail->mNext = new ListNode(tData);
		mTail = mTail->mNext;
	}
}

// Remove at start of list
template<typename T>
void ListNode::PopFront()
{
	if (isEmpty())
		cout << "Empty" << endl;
	else
		mHead++;
}

// Remove at end of list
template<typename T>
void ListNode::PopBack()
{
	if (mTail == isEmpty())
		cout << "Empty" << endl;
	else
		mTail--;
}

// Return item at front of list
template<typename T>
void ListNode::T& Front() const
{
	T Front;
	if (mCurrent != NULL)
	{
		Front = mCurrent->mData;
	}
	return Front;
}

// Return item at end of list
template<typename T>
void ListNode::T& Back() const
{
	T Back;
	ListNode ptr = Back;
	while (ptr != NULL)
	{
		Back = ptr->mNext;
		if (ptr->mNext == NULL)
		{
			Back = ptr->mNext;
		}
		return Back;
	}
}

// Size of list
template<typename T>
void ListNode::int Size() const
{
	int size = 0;
	while (mCurrent != NULL)
	{
		++size;
		mCurrent = mCurrent->mNext;
	}
	return size;
}

// Clear list
template<typename T>
void ListNode::Clear()
{
	if (isEmpty(mHead))
		cout << "List empty." << endl;
	else if (mHead == mCurrent)
		mHead == NULL;
}

template<typename T>
void ListNode::Erase(Iterator tWhat)
{
	if (mHead == NULL)
		std::cout << "Empty" << std::endl;
	else
	{
		ListNode *mCurrent;
		if (mHead->getData() == delete)
		{
			mCurrent = mHead;			// Current point to the address the first node is pointing to
			mHead = mHead->Next();		// head now points to the next node

			if (mHead == NULL)
				last = NULL;
			else
				mHead->mPrev;

			--count;
			delete mCurrent;
			mCurrent == NULL;
		}
	}
		
}

template<typename T>
void ListNode::Iterator Begin()
{
	Iterator i;
	i.position = mHead;
	i.mCurrent = i->mHead;
	return i;
}

template<typename T>
void ListNode::Iterator End()
{
	Iterator i;
	i.position = mTail;
	i.mCurrent = i->mTail;
	return i;
}

template<typename T>
void ListNode::ConstIterator Begin() const
{
	delete[] mHead;
}

template<typename T>
void ListNode::ConstIterator End() const
{
	delete[] mTail;
}