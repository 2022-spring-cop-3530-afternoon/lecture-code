#ifndef BINARY_SEARCH_HPP
#define BINARY_SEARCH_HPP

class BinarySearch
{
	private:
		static long long BinaryFind (long long arrayItems[], long long right, long long searchKey);

	public:
		static long long Find (long long arrayItems[], long long length, long long searchKey);
};

#endif /*BINARY_SEARCH_HPP*/
