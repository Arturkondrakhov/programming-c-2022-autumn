#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;

	std::cin >> n >> m;

	int** arr = new int* [n];
	int* string = new int[n] {0};
	int* column = new int[m] {0};

	for (int i = 0; i < n; ++i)
	{
		arr[i] = new int[m] {0};
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cin >> arr[i][j];

			string[i] += arr[i][j];
			column[j] += arr[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		std::cout << string[i] << " ";
	}

	std::cout << std::endl;

	for (int i = 0; i < m; ++i)
	{
		std::cout << column[i] << " ";
	}

	std::cout << std::endl << std::endl;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cout << arr[i][j] << " ";
		}

		std::cout << std::endl;
	}

	for (int i = 0; i < n; ++i)
	{
		delete[] arr[i];
	}
	delete[] arr;

	delete[] string;
	delete[] column;

	return EXIT_SUCCESS;
}