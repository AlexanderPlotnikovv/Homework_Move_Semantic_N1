#include <iostream>
#include <vector>

template<class T>
void move_vectors(std::vector<T>& vector, std::vector<T>& vector_copy)
{
	for (int i = 0; i != vector_copy.size(); ++i)
	{
		vector[i] = std::move(vector_copy[i]);
	}
}

int main()
{
	std::vector <std::string> one = { "test_string1", "test_string2" };
	std::vector <std::string> two(one.size());
	move_vectors(two, one);
	for (auto elem : two)
	{
		std::cout << elem << " ";
	}
	return 0;
}