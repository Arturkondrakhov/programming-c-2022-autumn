#include <iostream>

std::string pri(int n, int i)
{
	if (i * i > n)
	{
		return "prime";
	}

	else if (n % i == 0)
	{
		return "composite";
	}

	return pri(n, ++i);
}

int main(int argc, char* argv[])
{
	int a = 0;

	std::cin >> a;

	std::cout << pri(a, 2);

	return EXIT_SUCCESS;
}