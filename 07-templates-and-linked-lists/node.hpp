#ifndef NODE_HPP
#define NODE_HPP

template <typename T>
class Node
{
	private:
		T data;
		Node<T>* next;
	public:
		Node(T inData = T(), Node<T>* next = nullptr);
		T GetData ();
		Node<T>* GetNext ();
};

#endif /*NODE_HPP*/
