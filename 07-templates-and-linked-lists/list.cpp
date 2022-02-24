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

template class List<int>;
