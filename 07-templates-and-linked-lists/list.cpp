#include "list.hpp"

template <typename T>
List<T>::List ()
{
	this->front = nullptr;
}

template <typename T>
Node<T>* List<T>::GetFront ()
{
	return this->front;
}

template <typename T>
void List<T>::InsertAtFront (T inData)
{
	Node<T>* newNode = new Node(inData);
	this->front = newNode;
}

template class List<int>;
