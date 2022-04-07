#ifndef TREE_HPP
#define TREE_HPP
#include "node.hpp"

template <typename T>
class Tree
{
	private:
		Node<T>* root = nullptr;

	public:
		void Insert (T value);
		Node<T>* GetRoot();
};

#endif /*TREE_HPP*/
