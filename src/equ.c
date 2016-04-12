#include <stdio.h>
#include <math.h>
#include "equ.h"


int equ(double a, double b, double c, double *x1, double *x2)
{
	double d;
	d = b * b - 4 * a * c;

	if (a == 0 && b == 0)
	{
		return INV_ARG;
	}
	
	if (a == 0)
	{
		*x1 = -c / b;
		return ONEROOT;
	}
	
	if (d < 0)
	{
		return NOROOTS;
	}
	
	if (d == 0)
	{
		*x1 = -b / (2 * a);
		return ONEROOT;
	}
	*x1 = (-b + sqrt(d)) / (2 * a);
	*x2 = (-b - sqrt(d)) / (2 * a);
	return TWOROOTS;
}