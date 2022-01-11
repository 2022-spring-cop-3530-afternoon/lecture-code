#include <iostream>
#include <string>
#include "binary-search.hpp"
#include "linear-search.hpp"
#include <sys/time.h>

void FillArray (long long arrayItems[]);
void PrintElapsedTime (timeval& prevTime, std::string  searchType);

const long long LENGTH = 1000000000;

int main ()
{
	struct timeval checkpoint;
	gettimeofday(&checkpoint, nullptr);

	long long searchKey = 0;
	static long long arrayItems[LENGTH];
	long long index = -1;
	FillArray(arrayItems);

	PrintElapsedTime(checkpoint, "Initializing array");

	while (true)
	{
		std::cout << "Enter a number to search for: ";
		std::cin >> searchKey;
		if (!std::cin)
		{
			std::cin.clear();
			std::cin.ignore(1000, '\n');
		}

		gettimeofday(&checkpoint, nullptr);

		if (searchKey < 0)
		{
			break;
		}

		//index = BinarySearch::Find(arrayItems, LENGTH, searchKey);
		//PrintElapsedTime(checkpoint, "binary");
		index = LinearSearch::Find(arrayItems, LENGTH, searchKey);
		PrintElapsedTime(checkpoint, "linear");

		if (index >= 0)
		{
			std::cout << "Found " << searchKey << " at index " << index << std::endl;
		}
		else
		{
			std::cout << searchKey << " not found!" << std::endl;
		}
	}

	return 0;
}

void FillArray (long long arrayValues[])
{
	for (long long i = 0; i < LENGTH; ++i)
	{
		arrayValues[i] = i;
	}
}

void PrintElapsedTime (timeval& prevTime, std::string searchType)
{
	struct timeval nextTime;

	gettimeofday(&nextTime, nullptr);
	int numberOfSecondsDelta = nextTime.tv_sec - prevTime.tv_sec;
	int numberOfMicroSecondsDelta = nextTime.tv_usec - prevTime.tv_usec;

	std::cout << "\t" << searchType << ": " << (numberOfMicroSecondsDelta / 1000) + numberOfSecondsDelta * 1000 << "ms" << std::endl;
	prevTime = nextTime;
}
