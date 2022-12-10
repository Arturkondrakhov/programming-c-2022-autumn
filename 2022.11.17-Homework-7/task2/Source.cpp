#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	int** arr = new int* [n];

	for (int i = 0; i < n; ++i)
	{
		arr[i] = new int[n] {0};
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cin >> arr[j][i];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cout << arr[i][j] << " ";
		}

		std::cout << std::endl;
	}

	delete[] arr;


	return EXIT_SUCCESS;
}
