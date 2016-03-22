#include <stdio.h>
#include "equ.h"

int main ()
{
	int a, b, c;

	printf("Enter a, b, c: ");
	scanf("%d%d%d", &a, &b, &c);

	equ(a, b, c);
	return 0;
}