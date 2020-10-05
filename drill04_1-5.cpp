#include "std_lib_facilities.h"

int main()
{
	cout << "Enter two values:\n";
	
	double value, value2;
	while (cin >> value)
	{	cin >> value2;
	
	
		if (value > value2){
			cout << "the smaller value is: " << value2 << " the larger value is: " << value << "\n";
		if (abs(value - value2) < 0.1)
			cout << "The numbers are almost equal.\n";}
	
		if (value < value2){
			cout << "the smaller value is: " << value << " the larger value is: " << value2 << "\n";
		if (abs(value - value2) < 0.1)
			cout << "The numbers are almost equal.\n";}
		if (value == value2)
			cout << "The numbers are equal.\n";
	}
		
		
	return 0;	

}

