#include <iostream>
#include <clocale>
#include <cmath>
#include <windows.h>
#include <iomanip>
using namespace std;

void Menu ();

void Sum ();

void Sub ();

void Mul ();

void Div ();

void Sqrt();

void Radical();

void Power();

int main ()
{
	setlocale (0, "");
	Menu ();
	system ("pause");
	return 0;
}

void Menu ()
{
	int menu;
	cout << "1. ��������   2. ����������  3. ���������  4. �������" << endl;
	cout << "5. ���������� ����������� �����  6. ������ ����� �������  7. ���������� � ������� " << endl;
	cout << "������� ����� : ";
		cin >> menu;
	switch (menu)
	{
		case 1: Sum (); break;
		case 2: Sub (); break;
		case 3: Mul (); break;
		case 4: Div (); break;
		case 5: Sqrt (); break;
		case 6: Radical (); break;
		case 7: Power (); break;
	}
}

void Sum ()
{
	int number;
	cout << "������� ���������� �����: ";
	cin >> number;
	double * s = new double[number];
	double answer = 0;
	for (int i = 0; i < number; i++)
	{
		cout << "������� " << i + 1 << " �����: ";
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
	cout << "������� ������ �����: ";
	cin >> a;
	cout << "������� ������ �����: ";
	cin >> b;
	cout << a << " - " << b << " = " << setprecision(8) << a - b << endl;
}

void Mul ()
{
	int number;
	cout << "������� ���������� ����������: ";
	cin >> number;
	double * s = new double[number];
	double answer = 1;
	for (int i = 0; i < number; i++)
	{
		cout << "������� " << i + 1 << " ���������: ";
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
	cout << "������� ������ �����: ";
	cin >> a;
	cout << "������� ������ �����: ";
	cin >> b;
	cout << a << " / " << b << " = " << setprecision(8) << a / b << endl;
}

void Sqrt()
{
	double a;
	cout << "������� �����, �� �������� ���� ������� ���������� ������: ";
	cin >> a;
	cout << "sqrt(" << a << ") = " << sqrt(a) << endl;
}

void Radical()
{
	double a, b;
	cout << "������� �����, �� �������� ���� ������� ������: ";
	cin >> a;
	cout << "������ ����� ������� ���� �������? ";
	cin >> b;
	cout << "������ " << b << " ������� �� ����� " << a << " ����� " << pow(a, 1 / b) << endl;
}

void Power()
{
	double a, b;
	cout << "������� ��������� ��������: ";
	cin >> a;
	cout << "������� ���������� ��������: ";
	cin >> b;
	cout << a << "^" << b << " = " << pow(a, b) << endl;
}
