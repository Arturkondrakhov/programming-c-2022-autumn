#include <iostream>

int main(int argc, char* argv[]) 
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int x = 0;
	std::cin >> a >> b;
	c = a / b;
	c = ((c + 2) / (c + 1)) % 2;
	d = (c + 1) % 2;
	x = a * c + b * d;
	std::cout << x << std::endl;

	return EXIT_SUCCESS;
}