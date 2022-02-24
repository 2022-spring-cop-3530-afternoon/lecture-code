#include "node.hpp"

template <typename T>
Node<T>::Node(T inData)
{
	this->data = inData;
}

template <typename T>
T Node<T>::GetData ()
{
	return this->data;
}

template class Node<int>;
