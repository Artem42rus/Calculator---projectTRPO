#include <iostream>
#include <math.h>
#include <iomanip>
#include "Function_declaration.h"
using namespace std;

bool done = 0;

int main()
{
	setlocale(LC_ALL, "Russian");

	while (!done)

	{
		done = ShowMenu();
	}

	return 0;
}
