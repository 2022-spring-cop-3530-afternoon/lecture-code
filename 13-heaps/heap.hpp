#ifndef HEAP_HPP
#define HEAP_HPP

class Heap
{
	private:
		int data[100];
		int numberOfElements = 0;
		void Percolate (int index);
		void Swap (int a, int b);
	public:
		int GetParent (int index);
		int GetLeft (int index);
		int GetRight (int index);
		void Insert (int newValue);
		int Peek ();
};

#endif /*HEAP_HPP*/
