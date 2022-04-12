#include "heap.hpp"

int Heap::GetParent (int index)
{
	if (index <= 0)
	{
		return -1;
	}
	return (index - 1) / 2;
}
