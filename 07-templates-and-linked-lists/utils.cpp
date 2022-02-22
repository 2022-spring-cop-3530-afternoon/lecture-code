#include "utils.hpp"

template <typename T>
void Swap (T& x, T& y)
{
	T	temp = x;
	x = y;
	y = temp;
}

template void Swap (int& x, int& y);
template void Swap (double& x, double& y);
