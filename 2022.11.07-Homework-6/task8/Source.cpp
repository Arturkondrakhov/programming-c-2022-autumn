#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int s = 0;
	int in = 0;

	std::cin >> n;

	int* arr = new int[n] {0};

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	std::cin >> s;

	in = (s < 0 ? (-1 * s % n) : (n - s % n));

	for (int i = 0; i < n; i++)
	{
		std::cout << arr[(i + in) % n] << " ";
	}

	delete[]arr;

	return EXIT_SUCCESS;
}