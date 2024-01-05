#pragma once
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <stack>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

class Polynomial
{
public:
	// empty polynomial
	Polynomial() 
	{
		// doesn't do anything for now
	}

	// constructor overload for a complete expression
	Polynomial(vector<Term> expr) 
	{
		Expression = expr;
	}

	// apparently C++ doesn't have extension functions, so declaring a function within the class itself to simplify like terms
	Polynomial Simplify() 
	{
		Polynomial simplified = Polynomial();
		return simplified;
	}

protected:
	// a vector (AKA list, in C# terminology) of terms
	vector<Term> Expression;

// for operations and the like
// TODO: calculus operators
private: 
	Polynomial Add(Polynomial p);
	Polynomial Subtract(Polynomial p);
	Polynomial Multiply(Polynomial p);
	Polynomial Divide(Polynomial p);
};

class Term {
public: 
	// the coefficient of the term
	double TermCoefficient;
	// term degree
	int Power;
};