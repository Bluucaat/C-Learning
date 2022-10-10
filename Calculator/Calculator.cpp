#include<iostream>
#include<cmath>

using namespace std;

double calculatorFunction(double num1, double num2, char op);

int main()
{

	char inputop = '+';
	double n1, n2 = 0.0;

	cout << "Please input the two numbers, and the operator (+,-,*,/,^): ";
	cout << "Number 1: ";
	cin >> a;
	cout << "Number 2: ";
	cin >> a;
	cout << "Operator (+,-,*,/,^), or X to quit: ";

	while (choice != 'X')
	{
		cout << "The Result is: "calculatorFunction(n1, n2, choice) << endl;
	}
}

double calculatorFunction(double n1, double n2, char op);
{
	if (op == '+')
	{
		result = a + b;

	}
	else if (op == '-')
	{
		result = a - b;

	}
	else if (op == '*')
	{
		result = a * b;

	}
	else if (op == '/')
	{
		result = a / b;

	}
	else if (op == '^')
	{
		result = pow(a ^ b);

	}
	else
	{
		cout << "Rubbish input mate please kindly try again!" << endl;

	}
	return result;
}