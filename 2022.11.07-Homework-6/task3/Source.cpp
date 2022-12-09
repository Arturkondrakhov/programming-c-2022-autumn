#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;

	std::cin >> n;

	int* arr = new int[n + 1] { 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> arr[i];
	}
	std::cin >> m;

	for (int i = 0; i < n + 1; ++i)
	{
		if (m > arr[i])
		{
			std::cout << ++i;

			break;
		}
	}

	delete[]arr;

	return EXIT_SUCCESS;
}