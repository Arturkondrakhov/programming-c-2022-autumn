#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;

	std::cin >> n;

	int* arr = new int[n] {0};

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];

		k = (arr[i] < arr[k] ? i : k);
	}
	for (int i = k; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}
	for (int i = 0; i < k; i++)
	{
		std::cout << arr[i] << " ";
	}

	delete[]arr;

	return EXIT_SUCCESS;
}