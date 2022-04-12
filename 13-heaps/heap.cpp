#include "heap.hpp"

int Heap::GetLeft (int index)
{
	return (2 * index) + 1;
}

int Heap::GetRight (int index)
{
	return 2 * (index + 1);
	//return this->GetLeft(index) + 1;
}

void Heap::Insert (int newValue)
{
	// shape
	this->data[this->numberOfElements] = newValue;

	// heap condition (max)
	this->Percolate(this->numberOfElements);

	++this->numberOfElements;
}

void Heap::Swap (int a, int b)
{
	int temp = this->data[a];
	this->data[a] = this->data[b];
	this->data[b] = temp;
}

void Heap::Percolate (int index)
{
	int parentId = this->GetParent(index);
	while (parentId >= 0)
	{
		if (this->data[index] > this->data[parentId])
		{
			this->Swap(index, parentId);
			index = parentId;
			parentId = this->GetParent(index);
		}
		else
		{
			break;
		}
	}
}

int Heap::GetParent (int index)
{
	if (index <= 0)
	{
		return -1;
	}
	return (index - 1) / 2;
}

int Heap::Peek ()
{
	if (this->numberOfElements <= 0)
	{
		throw "Noooo";
	}
	return this->data[0];
}
