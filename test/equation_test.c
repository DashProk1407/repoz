#include <ctest.h>

#include <equ.h>

CTEST(equation_suite, tworoots_test)
{
	//Given
	const double a = 1.41;
	const double b = 70.24;
	const double c = 600.01;

	//When
	double x1 = 0, x2 = 0;
	const int rv = equ(a, b, c, &x1, &x2);

	//Then
	const double expected_x1 = -10.948617021;
	const double expected_x2 = -38.866985816;

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
	ASSERT_EQUAL(TWOROOTS, rv);
}