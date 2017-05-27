#include <iostream>
#include <clocale>
#include <cmath>
#include <windows.h>
#include <iomanip>
using namespace std;

void Sum ()
{
	int number;
	cout << "¬ведите количество чисел: ";
	cin >> number;
	double * s = new double[number];
	double answer = 0;
	for (int i = 0; i < number; i++)
	{
		cout << "¬ведите " << i + 1 << " число: ";
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
	double a, b;
	cout << "¬ведите первое число: ";
	cin >> a;
	cout << "¬ведите второе число: ";
	cin >> b;
	cout << a << " - " << b << " = " << setprecision(8) << a - b << endl;
}

void Mul ()
{
	int number;
	cout << "¬ведите количество множителей: ";
	cin >> number;
	double * s = new double[number];
	double answer = 1;
	for (int i = 0; i < number; i++)
	{
		cout << "¬ведите " << i + 1 << " множитель: ";
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
	double a, b;
	cout << "¬ведите первое число: ";
	cin >> a;
	cout << "¬ведите второе число: ";
	cin >> b;
	cout << a << " / " << b << " = " << setprecision(8) << a / b << endl;
}

void Sqrt()
{
	double a;
	cout << "¬ведите число, из которого надо извлечь квадратный корень: ";
	cin >> a;
	cout << "sqrt(" << a << ") = " << sqrt(a) << endl;
}

void Radical()
{
	double a, b;
	cout << "¬ведите число, из которого надо извлечь корень: ";
	cin >> a;
	cout << " орень какой степени надо извлечь? ";
	cin >> b;
	cout << " орень " << b << " степени из числа " << a << " равен " << pow(a, 1 / b) << endl;
}

void Power()
{
	double a, b;
	cout << "¬ведите основание степпени: ";
	cin >> a;
	cout << "¬ведите показатель степпени: ";
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
