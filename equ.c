#include <stdio.h>
#include <math.h>

int equ(int a, int b, int c)
{
    int d, x1, x2;
    d = b*b - 4*a*c;

    if (d < 0)
    {
	printf("\nNo roots");
    }
    else if (d == 0)
    {
	x1 = -b/(2*a);
	printf("\nRoot: %d", x1);
    }
    else if (d > 0)
    {
	x1 = (-b + sqrt(d))/(2*a);
	x2 = (-b - sqrt(d))/(2*a);
	printf("\nRoots: %d %d", x1, x2);
    }
    return 0;
}