#include <stdio.h>
#include "equ.h"

int main()
{
	double a, b, c, x1 = 0, x2 = 0;
	int ret_val;
	printf("Enter a, b, c: ");
	scanf("%lf%lf%lf", &a, &b, &c);

	ret_val = equ(a, b, c, &x1, &x2);
	if (ret_val == NOROOTS)
		printf("\nNo roots");
	if (ret_val == INV_ARG)
		printf("\nInvalid arguments");
	if (ret_val == ONEROOT)
		printf("\nx = %2.lf", x1);
	if (ret_val == TWOROOTS)
		printf("\nx1 = %2.lf, x2 = %2.lf", x1, x2);
	return 0;
}