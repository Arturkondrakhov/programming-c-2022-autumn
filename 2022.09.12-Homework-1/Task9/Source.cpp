#include <iostream>

int main(int argc, char* argv[]) 
{
	int x = 0;
	std::cin >> x;
	int sq = x * x;
	int tet = sq * sq;
	std::cout << 1 + x + sq + tet / x + tet << std::endl;

	return EXIT_SUCCESS;
}