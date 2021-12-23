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

	char str[] = { ")u(e{f[n]f}ie;" };
	PairingOfParentheses<char> Object;

	if (Object.PairingCheck(str))
	{
		cout << "String " << str << " is correct" << endl;
	}
	else if (!Object.PairingCheck(str))
	{
		cout << "String " << str << " is NOT correct" << endl;
	}

	char str1[] = { "u(e{f[n]f}i)e;" };
	PairingOfParentheses<char> Object1;

	if (Object1.PairingCheck(str1))
	{
		cout << "String " << str1 << " is correct" << endl;
	}
	else if (!Object1.PairingCheck(str1))
	{
		cout << "String " << str1 << " is NOT correct" << endl;
	}

	Object.~PairingOfParentheses();
	Object1.~PairingOfParentheses();

	cout << endl;
	cout << "************************** END OF TASK 1 *************************" << endl;
}