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

		// go through the vector 
		return simplified;
	}

	// destructor, defined explicitly for when needed later
	~Polynomial() 
	{

	}

protected:
	// a C++ vector of Terms in the expression's numerator
	vector<Term> Expression;

// for operations and the like
// TODO: define bodies for both
private: 
	Polynomial Add(const Polynomial& p)
	{

	}

	Polynomial Subtract(const Polynomial& p)
	{


	}
	
	Polynomial Multiply(const Polynomial& p)
	{

	}

	// TODO for later, when you extend this to rational functions.
	Polynomial Divide(const Polynomial&)
	{
		throw logic_error("Not implemeted yet");
	}
};

// Representing a single term in the expression.
class Term {
public: 
	
	// constructor with power and coefficients provided
	Term(double coeff, int pow)
	{
		this->Power = pow;
		this->TermCoefficient = coeff;
	}

	// default constructor
	Term() {};
	
	// PROPERTIES
	// the coefficient of the term
	double TermCoefficient;
	// term degree
	int Power;
};