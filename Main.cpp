#include <iostream>
#include "Helpers.h"

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "������� ������ �����: "; cin >> a;
	cout << "������� ������ �����: "; cin >> b;
	cout << "\n���������: (" << a << " + " << b << ")^2 = " << square(a, b) << endl;
}