#include <iostream>

int main(int argc, char* argv[])
{
	int a = 1;
	int cnt = 0;

	while (a != 0)
	{
		std::cin >> a;
		if (a % 2 == -1)
		{
			++cnt;
		}
	}

	std::cout << cnt;

	return EXIT_SUCCESS;
}

