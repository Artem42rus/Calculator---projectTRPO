#include <iostream>
#include <clocale>
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
int main ()
{
	setlocale (0, "");
	Sum ();
	Sub ();
	Mul ();
	system ("pause");
	return 0;
}
