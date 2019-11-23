#pragma once
#include <iostream>
#include <cstdlib>
#include <cmath>
#include "PolyMath.h"

using namespace std;

class Polynomial
{
public:
	Polynomial() {}
	Polynomial operator+(Polynomial B);
	Polynomial operator-(Polynomial B);
};

