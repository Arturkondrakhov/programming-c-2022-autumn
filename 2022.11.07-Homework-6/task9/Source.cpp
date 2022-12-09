#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int ma = 0;
	int in = 0;
	int im = 0;
	int mas = 0;
	int su = 0;

	std::icn >> n;

	int* arr = new int[n] {0};

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	while (in < n)
	{
		for (int i = 0; i < n - in; ++i)
		{
			su += arr[i + in];

			if (ma < arr[i + in] * (i + 1) && arr[i + in] * (i + 1) > su)
			{
				ma = arr[i + in] * (i + 1);
				im = i + in;
			}
			else if (ma < su)
			{
				ma = su;
				im = i + in;
			}
		}
		in = im + 1;
		mas += ma;
		ma = 0;
		su = 0;
	}

	std::cout << mas;

	delete[]arr;

	return EXIT_SUCCESS;
}