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

void Heap::PercolateDown (int index)
{
	// check both children
	int leftChildIndex = this->GetLeft(index);
	int rightChildIndex = this->GetRight(index);

	if (leftChildIndex < this->numberOfElements)
	{
		if (rightChildIndex < this->numberOfElements)
		{
			if (this->data[index] < this->data[leftChildIndex] || this->data[index] < this->data[rightChildIndex])
			{
				// if not max, swap with max
				if (this->data[rightChildIndex] > this->data[leftChildIndex])
				{
					this->Swap(index, rightChildIndex);
					this->PercolateDown(rightChildIndex);
				}
				else // left child is larger
				{
					this->Swap(index, leftChildIndex);
					this->PercolateDown(leftChildIndex);
				}
			}
		}
		else // only have left child
		{
			if (this->data[index] < this->data[leftChildIndex])
			{
				this->Swap(index, leftChildIndex);
				// cannot have grandchilden
				// since doesn't have right child
			}
		}
	}
	else // have no children
	{
		// do nothing
	}
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

int Heap::Pop ()
{
	if (this->numberOfElements <= 0)
	{
		throw "Noooo";
	}
	int poppedValue = this->data[0];

	// update the heap
	// move "worst" to top
	this->data[0] = this->data[this->numberOfElements - 1];
	--this->numberOfElements;
	// percolate down
	this->PercolateDown(0);

	return poppedValue;
}
