#include <iostream>
#include <math.h>
#include <windows.h>
#include <iomanip>
#include "Function.h"
using namespace std;
bool ShowMenu()
{
	short menu;

	cout << "1. ��������   2. ����������  3. ���������  4. �������" << endl;
	cout << "5. ���������� ����������� �����  6. ������ ����� �������  7. ���������� � ������� " << endl;
	
	cin >> menu;
	if (menu == 1)
		Sum();
	else if (menu == 2)
		Sub;
	else if (menu == 3)
		Mul();
	else if (menu == 4)
		Div();
	else if (menu == 5)
		Sqrt();
	else if (menu == 6)
		Radical();
	else if (menu == 7)
		Power();
	else if (menu == 8)
		return true;
	else
		Error();

	return false;
}
void Error()
{
	cout << "������������ ����, ���������� ���" << endl;
}

void Sum()
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

void Sub()
{
	double a, b;
	cout << "������� ������ �����: ";
	cin >> a;
	cout << "������� ������ �����: ";
	cin >> b;
	cout << a << " - " << b << " = " << setprecision(8) << a - b << endl;
}

void Mul()
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

void Div()
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
