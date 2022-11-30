#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int min = 1000;
	int max = 0;
	int x = 0;

	std::cin >> n;

	int* arr = new int[n] {0};

	for (int i = 0; i < n; ++i)
	{
		std::cin >> arr[i];

		if (arr[i] < min)
		{
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}

	}

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] == max)
		{
			std::cout << min << " ";
		}
		else
		{
			std::cout << arr[i] << " ";
		}
	}

	delete(arr);

	return EXIT_SUCCESS;
}