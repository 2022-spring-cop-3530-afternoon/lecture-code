#include "utils.hpp"

template <typename T>
void Swap (T& x, T& y)
{
	T	temp = x;
	x = y;
	y = temp;
}

template <typename T>
T Max (T a[], int length)
{
	T maxSoFar = a[0];
	for (int i = 1; i < length; ++i)
	{
		if (a[i] > maxSoFar)
		{
			maxSoFar = a[i];
		}
	}
	return maxSoFar;
}

template int Max (int x[], int y);
template void Swap (int& x, int& y);
template void Swap (double& x, double& y);
