#ifndef TREE_HPP
#define TREE_HPP
#include "node.hpp"
#include <string>
#include <sstream>

template <typename T>
class Tree
{
	private:
		Node<T>* root = nullptr;
		std::string Print (Node<T>* subtreeRoot);
		void DeleteSubtree (Node<T>* subtreeRoot);

	public:
		void Insert (T value);
		Node<T>* GetRoot();
		std::string Print ();
		~Tree ();
};

#endif /*TREE_HPP*/
