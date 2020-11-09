#include "std_lib_facilities.h"

int a = 5;
int b = 6;

void swap_v(int, int)
{
	int temp;
	temp = a;
	a = b;
	b = temp;

}

void swap_r(int&, int&)
{
	int temp;
	temp = a;
	a = b;
	b = temp;

}

void swap_cr(const int&, const int&)
{
	int temp;
	temp = a;
	a = b;
	b = temp;

}
int main()
{	
	cout << "a = " << a << " b = " << b << "\n";

	swap_v(a, b);
	cout << "a = " << a << " b = " << b << " (after swap)\n";

	swap_r(a, b);
	cout << "a = " << a << " b = " << b << " (after swap#2)\n";
	
	swap_cr(a, b);
	cout << "a = " << a << " b = " << b << " (after swap#3)\n";

	return 0;
}