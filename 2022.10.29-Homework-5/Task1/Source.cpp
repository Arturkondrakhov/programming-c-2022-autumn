#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int cnt = 0;
	int x = 0;

	std::cin >> n;

	int* arr = new int [n] {0};

	for (int i = 0; i < n; ++i)
	{
		std::cin >> arr[i];
	}

	std::cin >> x;

	for (int i = 0; i < n; ++i)
	{
		if (x == arr[i])
		{
			++cnt;
		}
	}

	std::cout << cnt << std::endl;
	
	delete(arr);

	return EXIT_SUCCESS;
}