#include <iostream>

int main(int arg, char* argv[])
{
	int a = 0;
	std::cin >> a;

	if (a % 4 == 0 || a == 1)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}

	return EXIT_SUCCESS;
}