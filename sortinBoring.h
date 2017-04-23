#pragma once

template<T>
class myVector {
	std::vector<T> myData;
	int first;
	int next;

public:
	void QSort(vector<int>* myData, int first, int next)
	{
		if (first >= next)
			return;

		int element;
		if (first < next)
		{
			for (int i = first + 1; i < next; i++)
			{
				i = i + 1;
				temp = element[next];
				element[next] = element[i];
				element[i] = temp;
			}
		}
		QSort(myData, element + 1; next);
	}

	void Sort(vector<int>* myData)
	{
		int min;		// Starting and current min
		int temp;		// Holds element to swap

		int size = myData.size();		// Get size of vector
		// Loops through and checks to see if there is new smallest, if yes, switch
		for (int i = 0; i < size - 1; i++)
		{
			min = i;
			for (int j = i + 1; j < size; j++)
			{
				if (myData[j] < myData[i])
				{
					min = j;
				}
			}
			if (min != i)
			{
				temp = myData[i];
				myData[i] = myData[min];
				myData[min] = temp;
			}
		}
	}
};