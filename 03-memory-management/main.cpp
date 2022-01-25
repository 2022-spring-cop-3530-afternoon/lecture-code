#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
int a = 12; // global variable

int main ()
{
	int twelve = 12;
	std::cout << twelve << std::endl;

	int* twelvePtr = &twelve;
	std::cout << twelvePtr << std::endl;
	std::cout << *twelvePtr << std::endl;

	int six = 6;
	twelvePtr = &six;

	int& twelveAddr = twelve;
	std::cout << twelveAddr << std::endl;
	// twelveAddr = &six; // won't compile

	// ARRAYS
	int arr[12];
	int array[] = {1,2,3,4,5};
	std::cout << array[3] << std::endl;
	std::cout << array << std::endl;
	std::cout << *array << std::endl;
	std::cout << *(array+3) << std::endl;

	int* dynamicArray = nullptr;
	//std::cout << *dynamicArray << std::endl;
	dynamicArray = new int[1000];
	dynamicArray[0] = 12;
	std::cout << dynamicArray[0] << std::endl;
	delete [] dynamicArray;

	int** matrix = nullptr;
	matrix = new int*[10];
	for (int i = 0; i < 10; ++i)
	{
		matrix[i] = new int[5];
	}

	matrix[2][1] = 15;
	std::cout << matrix[2][1] << std::endl;

	for (int i = 0; i < 10; ++i)
	{
		delete [] matrix[i];
	}

	delete [] matrix;

	return 0;
}