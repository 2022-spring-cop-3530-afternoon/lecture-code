#include "node.hpp"

template <typename T>
Node<T>::Node(T data)
{
	this->data = data;
}

template class Node<int>;
