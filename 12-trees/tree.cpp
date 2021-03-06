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
std::string Tree<T>::Print (Node<T>* subtreeRoot)
{
	if (subtreeRoot == nullptr)
	{
		return "";
	}
	std::ostringstream out;
	out << this->Print(subtreeRoot->GetLeft());
	out << subtreeRoot->GetData() << ' ';
	out << this->Print(subtreeRoot->GetRight());
	return out.str();
}
template <typename T>
std::string Tree<T>::Print ()
{
	// gateway function
	return this->Print(this->root);
}

template <typename T>
Node<T>* Tree<T>::GetRoot()
{
	return this->root;
}

template <typename T>
Tree<T>::~Tree ()
{
	this->DeleteSubtree(this->root);
}

template <typename T>
void Tree<T>::DeleteSubtree (Node<T>* subtreeRoot)
{
	if (subtreeRoot == nullptr)
	{
		return;
	}
	this->DeleteSubtree(subtreeRoot->GetLeft());
	this->DeleteSubtree(subtreeRoot->GetRight());
	delete subtreeRoot;
}

template class Tree<int>;
