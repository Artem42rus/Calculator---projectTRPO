#include <iostream>
#include <clocale>
using namespace std;

int Sum ()
{
	int a, b;
	int result;
	cout << "¬ведите 2 числа: ";
	cin >> a >> b;
	result = a + b;
	cout << result << endl;
}

int Sub ()
{
	int a, b;
	int result;
	cout << "¬ведите 2 числа: ";
	cin >> a >> b;
	result = a - b;
	cout << result << endl;
}

int Mul ()
{
	int a, b;
	int result;
	cout << "¬ведите 2 числа: ";
	cin >> a >> b;
	result = a * b;
	cout << result << endl;
}

float Div ()
{
	float a, b;
	float result;
	cout << "¬ведите 2 числа: ";
	cin >> a >> b;
	result = a / b;
	cout << result << endl;	
}
int main ()
{
	setlocale (0, "");
	Sum ();
	Sub ();
	Mul ();
	Div ();
	system ("pause");
	return 0;
}
