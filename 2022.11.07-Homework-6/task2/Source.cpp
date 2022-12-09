#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int d = 0;
	int l = 0;
	int r = 0;

	std::cin >> n;

	int* arr = new int[n] {0};

	for (int i = 0; i < n; ++i)
	{
		std::cin >> arr[i];
	}
	std::cin >> d;

	for (int i = 0; i < d; ++i)
	{
		std::cin >> l >> r;

		for (int j = l - 1; j < r; ++j)
		{
			std::cout << arr[j] << " ";
		}

		std::cout << std::endl;
	}

	delete[]arr;

	return EXIT_SUCCESS;
}