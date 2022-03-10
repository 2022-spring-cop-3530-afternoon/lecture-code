Sort (std::vector<int>& input)
{
	Sort(input, 0, input.size() - 1);
}

Sort (std::vector<int>& input, std:size_t left, std::size_t right)
{
	if (left >= right)
	{
		return;
	}
	std::size_t middle = (left + right) / 2;
	Sort(input, 0, middle);
	Sort(input, middle + 1, right);
	Merge(input, left, right);
}

Merge (std::vector<int>& input, std:size_t left, std::size_t right)
{
	std::size_t middle = (left + right) / 2;


}