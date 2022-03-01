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
	// steps 1 and 2
	Node<T>* newNode = new Node<T>(inData, this->front);
	// step 3
	this->front = newNode;
}

template <typename T>
std::string List<T>::Traverse ()
{
	std::ostringstream listOutput;
	Node<T>* currentNode = this->front;

	while (currentNode != nullptr)
	{
		listOutput << currentNode->GetData();
		currentNode = currentNode->GetNext();
		if (currentNode != nullptr)
		{
			listOutput << " -> ";
		}
	}

	return listOutput.str();
}

template <typename T>
void List<T>::DeleteFromFront ()
{
	Node<T>* garbage = this->front;
	if (garbage != nullptr)
	{
		this->front = garbage->GetNext();
		delete garbage;
	}
}

template <typename T>
List<T>::~List()
{
	while (this->front != nullptr)
	{
		this->DeleteFromFront();
	}
}

template class List<int>;
