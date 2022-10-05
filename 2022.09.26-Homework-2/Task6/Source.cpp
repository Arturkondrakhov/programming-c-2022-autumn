#include <iostream>

int main(int arg, char* argv[])
{
	int fl = 0; //ferze line
	int fc = 0; //ferze coloumn
	int figl= 0; //figure line
	int figc = 0; //figure coloumn
	std::cin >> fl >> fc >> figl >> figc;

	if ((fl= figl) || (fc ==figc) || (fl - figl == fc - figc) || (fl - figl + fc - figc == 0))
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}

	return EXIT_SUCCESS;
}
