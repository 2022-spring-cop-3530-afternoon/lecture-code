#ifndef LIST_HPP
#define LIST_HPP
#include "node.hpp"

template <typename T>
class List
{
	private:
		Node<T>* front;
	public:
		List ();
		Node<T>* GetFront ();
};

#endif /*LIST_HPP*/
