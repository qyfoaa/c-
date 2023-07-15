#include "swap.h"
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
void swap(double a, double b)
{
	cout << a << endl << b;
}