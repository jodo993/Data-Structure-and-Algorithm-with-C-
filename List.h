#pragma once
//class List
//{
//public:
//	List();
//	~List();
//};

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
		ListNode()
			T mData; // Putting this first makes it easier to see in the debugger
		ListNode *mPrev;
		ListNode *mNext;
	};

public:
	// ConstIterator
	class ConstIterator
	{
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
	{

	}
		void PushFront(T tData)
		{
			ListNode n = new node(tData);
			n->mNext = mHead;
			n->mPrev = NULL;

			if (mHead != NULL)
			{
				mHead->mPrev = n;
				mHead = n;
			}

			//mCurrent = n;
			
		}

		void PushBack(T tData)
		{
			ListNode n = new node(tData);
			n->mNext = NULL;
			n->mPrev = mTail;
		}

		void PopFront()
		{
			if (mPrev == NULL)
			{
				delete mHead;
			}
		}

		void PopBack()
		{
			if (mNext == NULL)
			{
				delete mTail;
			}
		}

		T& Front() const
		{

		}

		T& Back() const
		{

		}

		int Size() const
		{

		}

		void Clear()
		{

		}

		void Erase(Iterator tWhat)
		{

		}

		Iterator Begin()
		{

		}

		Iterator End()
		{

		}

		ConstIterator Begin() const
		{

		}

		ConstIterator End() const
		{

		}

private:
	ListNode *mHead;
	ListNode *mTail;
	int mSize;
	static T sUndefinedT; // See Front for details.
};

template<typename T>
T List<T>::sUndefinedT;