#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

void Hanoi(char from, char to, char via, int numberOfDisks)
{
	if (numberOfDisks > 0)
	{
		Hanoi(from, via, to, numberOfDisks - 1);
		std::cout << "Moving " << numberOfDisks << " from " << from << " to " << to << std::endl;
		Hanoi(via, to, from, numberOfDisks - 1);
	}
}

int main ()
{
	Hanoi('A', 'B', 'C', 40);
	return 0;
}