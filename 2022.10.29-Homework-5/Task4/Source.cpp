#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int max = 0;

	std::cin >> n;
	int* arr = new int[n] {0};

	for (int i = 0; i < n; ++i)
	{
		std::cin >> arr[i];
	}
	for (int i = 0; i < n + 2; ++i)
	{
		if (arr[i % n] + arr[(i + 1) % n] + arr[(i + 2) % n] > max)
		{
			max = arr[i % n] + arr[(i + 1) % n] + arr[(i + 2) % n];
		}
	}
		std::cout << max;

		free(arr);

	return EXIT_SUCCESS;
}