#include <iostream>

int** array(int n)
{
	int** result = new int* [n];

	for (int i = 0; i < n; ++i)
	{
		result[i] = new int[n] {0};
	}

	return result;
}

int** spiral(int** arr, int x, int y, int i, int n, int du)
{
	if (i > n * n)
	{
		return arr;
	}

	if (y < n - du && x == du - 1)
	{
		if (arr[x][y])
		{
			arr[++x][++y] = i;
			return spiral(arr, x, ++y, ++i, n, ++du);
		}
		else
		{
			arr[x][y] = i;
			return spiral(arr, x, ++y, ++i, n, du);
		}
	}
	else if (y == n - du && x < n - du)
	{
		arr[x][y] = i;

		return spiral(arr, ++x, y, ++i, n, du);
	}
	else if (y > du - 1 && x == n - du)
	{
		arr[x][y] = i;

		return spiral(arr, x, --y, ++i, n, du);
	}
	else if (y == du - 1 && x >= du)
	{
		arr[x][y] = i;

		return spiral(arr, --x, y, ++i, n, du);
	}
}

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	int** a = array(n);

	a = spiral(a, 0, 0, 1, n, 1);

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cout << a[i][j] << " ";
		}

		std::cout << std::endl;
	}

	delete[] a;

	return EXIT_SUCCESS;
}