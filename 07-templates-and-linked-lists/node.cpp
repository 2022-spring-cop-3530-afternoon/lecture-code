#include "node.hpp"

template <typename T>
Node<T>::Node(T inData, Node<T>* next)
{
	this->data = inData;
	this->next = next;
}

template <typename T>
T Node<T>::GetData ()
{
	return this->data;
}

template <typename T>
Node<T>* Node<T>::GetNext ()
{
	return this->next;
}

template class Node<int>;
