#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int ma = 0;

	std::cin >> n >> m;

	int* arr = new int[n] {0};
	int* b = new int[m] {0};

	for (int i = 0; i < n; ++i)
	{
		std::cin >> arr[i];

		ma = (ma < arr[i] ? arr[i] : ma);
	}

	for (int i = 0; i < m; ++i)
	{
		std::cin >> b[i];
	}

	int* c = new int[ma + 1] {0};

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			c[arr[i]] = (arr[i] == b[j] ? ++c[arr[i]] : c[arr[i]]);
		}
	}

	for (int i = 0; i <= ma; ++i)
	{
		if (c[i])
		{
			std::cout << i << " ";
		}
	}

	delete[]arr;


	return EXIT_SUCCESS;
}