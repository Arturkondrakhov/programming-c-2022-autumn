#include <iostream>

int main(int argc, char* argv[])
{
	int x = 0;
	int a = 1;
	int b = 0;
	int c = 0;

	std::cin >> x;

	do
	{
		b = 0;
		c = a - x;

		do
		{
			if (c >= 0)
			{
				std::cout << x - c << " ";
			}
			else
			{
				std::cout << x + c << " ";
			}
			++b;
			++c;
		} while (b < x);

		std::cout << std::endl;
		++a;

	} while (a <= x);

	return EXIT_SUCCESS;
}