#include "main.h"

/**
 * mul - times two int numbers together.
 * @a: one of the two int numbers.
 * @b: the other int number.
 *
 * Return: the result of the multiplication.
 */
int mul(int a, int b)
{
	int the_positive_value_of_two_coeff, the_other_coeff, x;
	int result = 0;

	if (a >= 0)
	{
		the_positive_value_of_two_coeff = a;
		the_other_coeff = b;
	}
	else if (b >= 0)
	{
		the_positive_value_of_two_coeff = b;
		the_other_coeff = a;
	}
	else
	{
		the_positive_value_of_two_coeff = -a;
		the_other_coeff = -b;
	}

	for (x = 0; x < the_positive_value_of_two_coeff; x++)
	{
		result += the_other_coeff;
	}

	return (result);
}
