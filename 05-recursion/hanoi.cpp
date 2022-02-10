#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

#define DISKS 6

void Show (int a[][DISKS], int size)
{
	for (int i = size - 1; i >= 0; --i)
	{
		for (int stack = 0; stack < 3; ++stack)
		{
			std::cout << std::string(size - a[stack][i], ' ');

			int blocks = 0;

			while (blocks++ < a[stack][i])
			{
				std::cout << "■■";
			}

			std::cout << std::string(size - a[stack][i], ' ');
		}

		std::cout << '\n';
	}

	std::cout << '\n';
}

void Move (int matrix[][DISKS], int from, int to)
{
	int fromIndex = 0;
	while (fromIndex < DISKS - 1 && matrix[from][fromIndex + 1] > 0)
	{
		++fromIndex;
	}
	int toIndex = 0;
	while (matrix[to][toIndex] > 0)
	{
		++toIndex;
	}

	matrix[to][toIndex] = matrix[from][fromIndex];
	matrix[from][fromIndex] = 0;
	Show(matrix, DISKS);
}

void Solve (int matrix[][DISKS], int from, int to, int via, int n)
{
	if (n > 0)
	{
		Solve(matrix, from, via, to, n-1);
		Move(matrix, from, to);
		Solve(matrix, via, to, from, n-1);

	}
}

int main ()
{
	int matrix[3][DISKS];
	for (int i = 0; i < DISKS; ++i)
	{
		matrix[0][i] = DISKS - i;
		matrix[1][i] = 0;
		matrix[2][i] = 0;
	}

	Solve(matrix, 0, 1, 2, DISKS);
	return 0;
}