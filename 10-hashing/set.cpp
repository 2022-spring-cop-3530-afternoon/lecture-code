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
		S (int i = 0, std::string s = "")
		{
			this->id = i;
			this->title = s;
		}
		int GetID () const { return this->id; }
		std::string GetTitle () const { return this->title; }
		bool operator == (const S& other) const { return this->id == other.id; }
};

namespace std
{
	template <>
	struct hash <S>
	{
		size_t operator () (const S& objectToHash) const
		{
			// return hash<int>(objectToHash.GetID());
			// fixed above by adding the function name being called - specifically ()
			return hash<int>()(objectToHash.GetID());
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

	S bar(12, "bar"); // same id, different title

	ess.insert(foo);
	ess.insert(bar);

	// the below will only print "foo" since the == operator is only using ID
	//  which is the same for the `foo` and `bar` objects
	for (const S& thing: ess)
	{
		std::cout << thing.GetTitle() << std::endl;
	}

	return 0;
}