/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jonathan Luong
 */

#include "std_lib_facilities.h"

int main()
{
	string operation;	// Can be + - * / plus minus mul div
	double d1 = 0;
	double d2 = 0;
	double res = 0;

	cout << "Please enter an operation \n"
        << "followed by two operands\n";

	while (cin >> operation >> d1 >> d2) {
		if (operation == "+") res = d1 + d2;
		else if (operation == "-") res = d1 - d2;
		else if (operation == "*") res = d1 * d2;
		else if (operation == "/") {
			if (d2 == 0)
				operation = "divzero";
			else
				res = d1 / d2;
		}
        // if wrong operator then it flags it
		else operation = "unknown";

		if (operation == "unknown")
			cout << "I don't know this operator!\n";
		else if (operation == "divzero")
			cout << "No division by zero!\n";
		else
			cout << d1 << ' ' << operation << ' ' << d2 << " = " << res << '\n';
		cout << "Try again\n";
	}

	return 0;
}