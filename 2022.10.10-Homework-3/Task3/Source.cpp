#include <iostream>

int main(int argc, char* argv[])
{
	int x = 0;
	int a = 0;
	int b = 0;

	std::cin >> x;

	do
	{
		b = 1;
		do
		{
			std::cout << a + b << " ";
			++b;
		} while (b <= x);
		std::cout << std::endl;
		++a;
	} while (a < x);

	return EXIT_SUCCESS;
}