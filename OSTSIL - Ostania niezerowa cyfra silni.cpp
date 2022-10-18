#include <iostream>
#include <string>

int main()
{
	int input, factorial;
	std::string factorial_string;

	int number_of_tests;
	std::cin >> number_of_tests;
	unsigned long long N = 0;

	for (int j = 0; j < number_of_tests; j++)
	{
		std::cin >> N;
		unsigned long long x = 1;
		for (unsigned long long n = 2; n <= N; ++n)
		{
			x *= n;
			while (!(x % 10)) x /= 10;
			x %= 1000000000LL;
		}
		std::cout << x % 10 << std::endl;
	}
	return 0;
}
