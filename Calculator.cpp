#include <iostream>
#include <clocale>
#include <cmath>
#include <windows.h>
#include <iomanip>
using namespace std;

int Sum ()
{
	int a, b;
	int result;
	cout << "������� 2 �����: ";
	cin >> a >> b;
	result = a + b;
	cout << result << endl;
}

int Sub ()
{
	int a, b;
	int result;
	cout << "������� 2 �����: ";
	cin >> a >> b;
	result = a - b;
	cout << result << endl;
}

int Mul ()
{
	int a, b;
	int result;
	cout << "������� 2 �����: ";
	cin >> a >> b;
	result = a * b;
	cout << result << endl;
}

float Div ()
{
	float a, b;
	float result;
	cout << "������� 2 �����: ";
	cin >> a >> b;
	result = a / b;
	cout << result << endl;	
}

void Sqrt()
{
	double a;
	cout << "������� �����, �� �������� ���� ������� ���������� ������: ";
	cin >> a;
	cout << "sqrt(" << a << ") = " << sqrt(a) << endl;
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
