#include "main.h"

/***
 * print_last_digit - Prints the last digit of the number
 * @c: The number to be treated
 *Return : Value of the last digit number.
 */

 int print_last_digit(int n)

{

	int last;

	last = n % 10;
	if (last < 0)
	{
	last = last * '0';
	}
	_putchar(last + '0');
	return (last);
}
