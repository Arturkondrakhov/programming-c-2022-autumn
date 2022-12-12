#include <iostream>

int* f(int x, int y, int* arr)
{
	if (x * 2 >= y)
	{
		return arr;
	}

	else
	{
		int c = arr[x];
		arr[x] = arr[y - x];
		arr[y - x] = c;

		return f(++x, y, arr);
	}
}

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	int* a = new int[n] {0};

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	a = f(0, n - 1, a);

	for (int i = 0; i < n; ++i)
	{
		std::cout << a[i] << " ";
	}

	delete[] a;

	return EXIT_SUCCESS;
}