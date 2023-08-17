#include "main.h"

/***
 * _abs - Computes the absolutue value of an integer.
 * @c : Thre number to be computed
 * Return: Absolute value of the number or 0.
 */

int _abs(int c)

{

	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
