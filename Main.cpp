#include <iostream>
#include "Helpers.h"

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "¬ведите первое число: "; cin >> a;
	cout << "¬ведите второе число: "; cin >> b;
	cout << "\n–езультат: (" << a << " + " << b << ")^2 = " << square(a, b) << endl;
}