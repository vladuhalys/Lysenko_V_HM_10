#include "library.h"

int Fac(int number, int res = 1)
{
	if (number == 0)
	{
		return 1;
	}
	else if (number == 1)
	{
		return res;
	}
	else
	{
		res *= number;
		number--;
		return Fac(number, res);
	}

}

void Exercise()
{
	double x, b, F = 1;
	int n;
	cout << "Enter n->";
	cin >> n;
	cout << "Enter b->";
	cin >> b;
	cout << "Enter x->";
	cin >> x;
	if (x > 4 && n > 0)
	{
		for (size_t k = 1; k <= n; k++)
		{
			F *= (1 + (k * k * x) / (Fac(k)));
		}
	}
	else if (0 < x && x < 4 && b > 0)
	{
		F = x * sqrt(b * b * b);
	}
	else
	{
		F = 0;
	}
	cout << "F = " << F << endl;
}