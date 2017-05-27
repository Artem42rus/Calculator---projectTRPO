#include <iostream>
#include <clocale>
#include <cmath>
#include <windows.h>
#include <iomanip>
using namespace std;

void Sum ()
{
	int a, b;
	int result;
	cout << "Введите 2 числа: ";
	cin >> a >> b;
	result = a + b;
	cout << result << endl;
}

void Sub ()
{
	int a, b;
	int result;
	cout << "Введите 2 числа: ";
	cin >> a >> b;
	result = a - b;
	cout << result << endl;
}

void Mul ()
{
	int a, b;
	int result;
	cout << "Введите 2 числа: ";
	cin >> a >> b;
	result = a * b;
	cout << result << endl;
}

void Div ()
{
	float a, b;
	float result;
	cout << "Введите 2 числа: ";
	cin >> a >> b;
	result = a / b;
	cout << result << endl;	
}

void Sqrt()
{
	double a;
	cout << "Введите число, из которого надо извлечь квадратный корень: ";
	cin >> a;
	cout << "sqrt(" << a << ") = " << sqrt(a) << endl;
}

void Radical()
{
	double a, b;
	cout << "Введите число, из которого надо извлечь корень: ";
	cin >> a;
	cout << "Корень какой степени надо извлечь? ";
	cin >> b;
	cout << "Корень " << b << " степени из числа " << a << " равен " << pow(a, 1 / b) << endl;
}

void Power()
{
	double a, b;
	cout << "Введите основание степпени: ";
	cin >> a;
	cout << "Введите показатель степпени: ";
	cin >> b;
	cout << a << "^" << b << " = " << pow(a, b) << endl;
}

int main ()
{
	setlocale (0, "");
	Sqrt();
	Sum ();
	Sub ();
	Mul ();
	Div ();
	system ("pause");
	return 0;
}
