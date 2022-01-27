#ifndef BAR_HPP
#define BAR_HPP

// file guards
class Bar
{
	private:
		int dataCapacity;
		int* data;
		// bunch more
		void Copy (const Bar& other);
	public:
		Bar (int dataCapacity = 100);
		Bar (const Bar& other);
		Bar& operator= (const Bar& other);
		~Bar();
};
#endif /*BAR_HPP*/