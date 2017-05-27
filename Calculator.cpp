#include <iostream>
#include <clocale>
#include <cmath>
#include <windows.h>
#include <iomanip>
using namespace std;

void Sum ()
{
	int number;
	cout << "Введите количество слагаемых: ";
	cin >> number;
	double * s = new double[number];
	double answer = 0;
	for (int i = 0; i < number; i++)
	{
		cout << "Введите " << i + 1 << " слагаемое: ";
		cin >> s[i];
		answer += s[i];
	}
	for (int i = 0; i < number - 1; i++)
		cout << setprecision(8) << s[i] << " + ";
	cout << setprecision(8) << s[number - 1] << " = " << setprecision(8) << answer << endl;
	delete[]s;
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
	int number;
	cout << "Введите количество множителей: ";
	cin >> number;
	double * s = new double[number];
	double answer = 1;
	for (int i = 0; i < number; i++)
	{
		cout << "Введите " << i + 1 << " множитель: ";
		cin >> s[i];
		answer *= s[i];
	}
	for (int i = 0; i < number - 1; i++)
		cout << setprecision(8) << s[i] << " * ";
	cout << setprecision(8) << s[number - 1] << " = " << setprecision(8) << answer << endl;
	delete[]s;
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
