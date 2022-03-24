#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>

int main ()
{
	std::unordered_map<std::string,int> map;
	map["foo"] = 12;

	std::cout << map["foo"] << std::endl;

	if (map.find("foo") != map.end())
	{
		std::cout << "found it\n";
	}
	else
	{
		std::cout << "found didn't find\n";
	}
	if (map.find("bar") != map.end())
	{
		std::cout << "found it\n";
	}
	else
	{
		std::cout << "found didn't find\n";
	}

	std::cout << map["bar"] << std::endl;

	if (map.find("bar") != map.end())
	{
		std::cout << "found it\n";
	}
	else
	{
		std::cout << "found didn't find\n";
	}

	//for (auto& d: map) // equivalent to below
	for (const std::pair<std::string,int>& d: map)
	{
		std::cout << d.first << ": " << d.second << std::endl;
	}

	return 0;
}