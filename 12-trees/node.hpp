#ifndef NODE_HPP
#define NODE_HPP

template <typename T>
class Node
{
	private:
		T data;
		Node<T>* left = nullptr;
		Node<T>* right = nullptr;
	public:
		Node(T data);
		T GetData ();
		Node<T>* GetLeft ();
		Node<T>* GetRight ();
		void SetLeft (Node<T>* left);
		void SetRight (Node<T>* right);
};

#endif /*NODE_HPP*/
