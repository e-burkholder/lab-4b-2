#include <iostream>
using namespace std;
int main() {
	double x, y, z;
	cout << "Please enter three numbers: ";
	cin >> x >> y >> z;

	//if x is the largest
	if (x > y && x > z)  
	{
		cout << "The largest number is " << x;
	}

	//if y is the largest
	else if (y>x && y>z)
	{
		cout << "The largest number is " << y;
	}

	//if z is the largest
	else if (z > x && z > y)
	{
		cout << "The largest number is " << y;
	}

	else if (cin.fail())
	{
		cout << "Please enter the numerical values.";
		return 1;
	}
	return 0;
}