#include <iostream>
#include <cstdlib>
#include <cmath>
#include <stack>
#include <string>
#include <sstream>
// custom headers
#include "PolyCAS_Core.h"
#include "PolynomialOperatorOverloads.h"
#include "ParseInfixToPostfix.h"
#include "EvaluatePostfixExpression.h"

using namespace std;

int main()
{
    std::cout << "Hello World!\n"
			  << "Please enter an expression here: ";
	string s = " ";
	cin  >> s;
	cout << endl << endl;
	int size = s.length();
	char PostfixExpression[100];
	// converting the entered expression to postfix using
	// the method we defined in ParseInfixToPostfix.h
	infix2postfix(s, PostfixExpression, size);
	cout << PostfixExpression;
}