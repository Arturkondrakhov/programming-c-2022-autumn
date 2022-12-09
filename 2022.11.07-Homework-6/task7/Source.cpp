#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int mi = 100;
	int ma = -100;
	int su = 0;
	int pro = 1;
	int tru = 2;

	std::cin >> n;

	int* arr = new int[n] {0};

	for (int i = 0; i < n; ++i)
	{
		std::cin >> arr[i];

		ma = (ma > arr[i] ? ma : arr[i]);
		mi = (mi < arr[i] ? mi : arr[i]);
		su = (arr[i] > 0 ? su + arr[i] : su);
	}

	for (int i = 0; i < n && tru; ++i)
	{
		pro = (tru == 1 ? pro * arr[i] : pro);

		tru = ((arr[i] == ma || arr[i] == mi) ? --tru : tru);

		pro = (tru == 0 ? pro / arr[i] : pro);
	}

	std::cout << su << " " << pro;

	delete[]arr;

	return EXIT_SUCCESS;
}