// Lab_03_4.cpp
// < Іванів Олександр Андрійович >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 0.9
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double y;
	double R;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	// розгалуження в повній формі
	if ((x * x + y * y <= R * R) && x < 0 && y < 0 || (x * x + y * y <= R * R) && ((y = pow(x - 1, 2) <= R)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	return 0;

}