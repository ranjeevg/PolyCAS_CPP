#include <iostream>
#include <cstdlib>
#include <cmath>
#include <stack>
#include <string>
#include <sstream>

using namespace std;

Term operator + (const Term& P, const Term& Q)
{
	// throw exception if powers are not the same
	if (P.Power != Q.Power)
		throw invalid_argument("Both terms must have the same power to be able to be added.");

	Term Result = Term((P.TermCoefficient + Q.TermCoefficient), P.Power);
	return Result;
}

Term operator - (const Term& P, const Term& Q)
{
	// throw exception if powers are not the same
	if (P.Power != Q.Power)
		throw invalid_argument("Both terms must have the same power to be able to be added.");

	Term Result = Term((P.TermCoefficient - Q.TermCoefficient), P.Power);
	return Result;
}

Term operator * (const Term& P, const Term& Q)
{
	Term Result = Term();
	
	// check if one or both terms are 0. Quick and easy answer in that case.
	if (P.TermCoefficient == 0 || Q.TermCoefficient == 0)
	{
		Result.TermCoefficient = 0;
		Result.Power = 1;

		return Result;
	}

	Result.Power = P.Power + Q.Power;
	Result.TermCoefficient = P.TermCoefficient * Q.TermCoefficient;
}

Term operator / (const Term& P, const Term& Q)
{
	Term Result = Term();

	// check if denom is 0, throw a logic error if so
	if (Q.TermCoefficient == 0) 
		throw logic_error("Cannot divide by 0.");

	// check if num is 0
	if (P.TermCoefficient == 0)
	{
		Result.TermCoefficient = 0;
		Result.Power = 1;

		return Result;
	}

	// after handling both edge cases, let us proceed as normal.
	Result.TermCoefficient = P.TermCoefficient / Q.TermCoefficient;
	Result.Power = P.Power - Q.Power;

	return Result;
}