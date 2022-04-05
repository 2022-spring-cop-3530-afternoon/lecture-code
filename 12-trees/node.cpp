#include "node.hpp"

template <typename T>
Node<T>::Node(T data)
{
	this->data = data;
	this->left = nullptr;
	this->right = nullptr;
}

template <typename T>
Node<T>* Node<T>::GetLeft ()
{
	return this->left;
}

template <typename T>
Node<T>* Node<T>::GetRight ()
{
	return this->right;
}

template <typename T>
T Node<T>::GetData ()
{
	return this->data;
}

template <typename T>
void Node<T>::SetLeft (Node<T>* left)
{
	this->left = left;
}

template <typename T>
void Node<T>::SetRight (Node<T>* right)
{
	this->right = right;
}

template class Node<int>;
