#include "tree.hpp"

template <typename T>
void Tree<T>::Insert (T value)
{
	Node<T>* newNode = new Node<T>(value);
	this->root = newNode;
}

template <typename T>
Node<T>* Tree<T>::GetRoot()
{
	return this->root;
}

template class Tree<int>;
