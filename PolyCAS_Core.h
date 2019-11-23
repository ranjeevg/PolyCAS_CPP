#pragma once
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <stack>
#include <string>
#include <sstream>
#include "PolynomialOperatorOverloads.h"
#include "ParseInfixToPostfix.h"

using namespace std;

class Polynomial
{
public:
	// empty polynomial
	Polynomial() {}
};

Polynomial operator + (const Polynomial& P, const Polynomial& Q)
{
	// etc. 
	// for now: 
	return P;
}

Polynomial operator - (const Polynomial& P, const Polynomial& Q)
{
	// for now: 
	return P;
}

