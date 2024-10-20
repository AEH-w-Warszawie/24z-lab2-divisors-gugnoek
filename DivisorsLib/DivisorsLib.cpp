#include <vector>
#include "Divisors.h"

std::vector<unsigned long long> divisors(unsigned long long number)
{
	std::vector<unsigned long long> result;
	/*
	for (unsigned long long i = 1; i <= number; ++i)
	{
		if (number % i == 0)
			result.push_back(i);
	}
	*/
	for (unsigned long long i = 1; i * i <= number; ++i) // Sadece sqrt(number)'a kadar döngü
	{
		if (number % i == 0)
		{
			result.push_back(i);  // i bir bölen
			if (i != number / i)  // i ve number / i e?it de?ilse, çifti ekle
			{
				result.push_back(number / i);  // number / i de bölen
			}
		}
	}
	return result;
}
