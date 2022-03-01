#ifndef LIST_HPP
#define LIST_HPP
#include "node.hpp"
#include <string>
#include <sstream>

template <typename T>
class List
{
	private:
		Node<T>* front;
	public:
		List ();
		Node<T>* GetFront ();
		void InsertAtFront (T inData);
		void DeleteFromFront ();
		std::string Traverse ();
		~List();
};

#endif /*LIST_HPP*/
