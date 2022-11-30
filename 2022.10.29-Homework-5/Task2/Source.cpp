#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int max = -1000;
	int ind = 0;
	int L = 0;
	int R = 0;

	std::cin >> n;

	int* arr = new int[n] {0};

	for (int i = 0; i < n; ++i)
	{
		std::cin >> arr[i];
	}

	std::cin >> L >> R;

	for (int i = L - 1; i < R; ++i)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			ind = ++i;
		}
	}

	std::cout << max << "  " << ind;

	delete(arr);

	return EXIT_SUCCESS;
}