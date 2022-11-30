#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int ma = 0;
	int len = 1000;
	int num = 0;

	scanf_s("%d", &n);

	int* a = new int[n] {0};

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}

	std::cin >> num;

	for (int i = 0; i < n; ++i)
	{

		if ((a[i] - num) * (a[i] - num) == len)
		{
			ma = (ma > a[i] ? a[i] : ma);
		}
		else if ((a[i] - num) * (a[i] - num) < len)
		{
			ma = a[i];
			len = (a[i] - num) * (a[i] - num);
		}
	}

	std::cout << ma;

	delete(a);

	return EXIT_SUCCESS;
}