#include "tree.hpp"

template <typename T>
void Tree<T>::Insert (T value)
{
	Node<T>* newNode = new Node<T>(value);
	if (this->root == nullptr)
	{
		this->root = newNode;
		return;
	}

	Node<T>* currentNode = this->root;

	while (currentNode != nullptr)
	{
		if (value >= currentNode->GetData())
		{
			// go right
			if (currentNode->GetRight() == nullptr)
			{
				// found where to add new node
				currentNode->SetRight(newNode);
				return;
			}
			currentNode = currentNode->GetRight();
		}
		else
		{
			// go left
			if (currentNode->GetLeft() == nullptr)
			{
				// found where to add new node
				currentNode->SetLeft(newNode);
				return;
			}
			currentNode = currentNode->GetLeft();
		}
	}
}

template <typename T>
Node<T>* Tree<T>::GetRoot()
{
	return this->root;
}

template class Tree<int>;
