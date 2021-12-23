#include <iostream>
#include <sstream>
#include <string>
#include <ostream>
#include "PairingOfParentheses.h"
#include "PairingOfParentheses.cpp"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	cout << "************************** START OF TASK 1 *************************" << endl;
	cout << endl;

	char str[] = { "u(e{f[n]f}ie;" };
	PairingOfParentheses<char> Object;

	if (Object.PairingCheck(str))
	{
		cout << "Строка " << str << " корректна" << endl;
	}
	else if (!Object.PairingCheck(str))
	{
		cout << "Строка " << str << " НЕ корректна" << endl;
	}

	char str1[] = { "u(e{f[n]f}i)e;" };

	if (Object.PairingCheck(str1))
	{
		cout << "Строка " << str1 << " корректна" << endl;
	}
	else if (!Object.PairingCheck(str1))
	{
		cout << "Строка " << str1 << " НЕ корректна" << endl;
	}

	cout << endl;
	cout << "************************** END OF TASK 1 *************************" << endl;
}