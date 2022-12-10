#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int l = 0;

	std::cin >> n >> m;

	int** arr = new int* [n];

	for (int i = 0; i < n; ++i)
	{
		arr[i] = new int[m] {0};
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cin >> arr[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cin >> l;
			arr[i][j] += l;
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