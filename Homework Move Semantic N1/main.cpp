#include <iostream>
#include <vector>

template<class T>
void move_vectors(std::vector<T>& vector, std::vector<T>& vector_copy)
{
	vector = std::move(vector_copy);
}

int main()
{
	std::vector <std::string> one = { "test_string1", "test_string2" };
	std::vector <std::string> two;
	move_vectors(two, one);
	for (auto elem : two)
	{
		std::cout << elem << " ";
	}
	return 0;
}