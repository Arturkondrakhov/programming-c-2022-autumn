#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;

	std::cin >> n >> m;

	int** arr = new int* [n];

	for (int i = 0; i < n; ++i)
	{
		arr[i] = new int[m] {0};
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			std::cin >> arr[i][m - j];
		}
	}

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

	return EXIT_SUCCESS;
}