#include "bar.hpp"

Bar::Bar (int dataCapacity): dataCapacity(dataCapacity)
{
	//this->dataCapacity = dataCapacity;
	this->data = new int[dataCapacity];
}

Bar::Bar (const Bar& other)
{
	this->dataCapacity = other.dataCapacity;
	this->data = new int[this->dataCapacity];
	for (int i = 0; i < this->dataCapacity; ++i)
	{
		this->data[i] = other.data[i];
	}
}

Bar::~Bar()
{
	delete [] this->data;
}