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

CTEST(equation_suite, oneroots_test)
{
	//Given
	const double a = 0;
	const double b = 2.5;
	const double c = -5.5;

	//When
	double x1 = 0, x2 = 0;
	const int rv = equ(a, b, c, &x1, &x2);

	//Then
	const double expected_x1 = 2.2;

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_EQUAL(ONEROOT, rv);
}

CTEST(equation_suite, oneroots2_test)
{
	//Given
	const double a = 1;
	const double b = 6;
	const double c = 9;

	//When
	double x1 = 0, x2 = 0;
	const int rv = equ(a, b, c, &x1, &x2);

	//Then
	const double expected_x1 = -3;

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_EQUAL(ONEROOT, rv);
}

CTEST(equation_suite, noroots_test)
{
	//Given
	const double a = 2.0;
	const double b = 4.0;
	const double c = 7.0;

	//When
	double x1 = 0, x2 = 0;
	const int rv = equ(a, b, c, &x1, &x2);

	//Then
	ASSERT_EQUAL(NOROOTS, rv);
}

CTEST(equation_suite, inv_arg_test)
{
	//Given
	const double a = 0;
	const double b = 0;
	const double c = 7.0;

	//When
	double x1 = 0, x2 = 0;
	const int rv = equ(a, b, c, &x1, &x2);

	//Then
	ASSERT_EQUAL(INV_ARG, rv);
}