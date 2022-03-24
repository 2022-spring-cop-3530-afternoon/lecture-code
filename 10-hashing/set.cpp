#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>

class S
{
	private:
		int id;
		std::string title;
	public:
		S(int i = 0, std::string s = "")
		{
			this->id = i;
			this->title = s;
		}
		int GetID () { return this->id; } const
};

namespace std
{
	template <>
	struct hash <S>
	{
		size_t operator () (const S& objectToHash) const
		{
			return hash<int>(objectToHash.GetID());
		}
	};
}

int main ()
{
	std::unordered_set<int> nums;
	nums.insert(12);
	std::cout << (nums.find(12) != nums.end() ? "Yes" : "no") << std::endl;
	std::cout << (nums.find(13) != nums.end() ? "Yes" : "no") << std::endl;
	std::cout << (nums.find(13) != nums.end() ? "Yes" : "no") << std::endl;

	nums.erase(12);
	std::cout << (nums.find(12) != nums.end() ? "Yes" : "no") << std::endl;

	S foo(12, "foo");
	std::unordered_set<S> ess;


	return 0;
}