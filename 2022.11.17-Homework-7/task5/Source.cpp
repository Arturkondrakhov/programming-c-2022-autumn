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

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cin >> arr[n - i][j];
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

	delete[] arr;

	return EXIT_SUCCESS;
}