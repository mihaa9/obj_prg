#include <iostream>

int Fcn(int x, int low = 1, int high = 10)
{
	if (x < low) return low;
	else if (x > high) return high;
	else
		return x;
}

double Fcn(double y, double low = 1.0, double high = 10.5)
{
	if (y < low) return low;
	else if (y > high) return high;
	else
		return y;
}

int main()
{
	int x{ 11 };
	double y{ 10.3 };
	std::cout << Fcn(x) << '\n';
	std::cout << Fcn(y) << '\n';

	return 0;
}