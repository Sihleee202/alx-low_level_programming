#include "main.h"

/*
 * _isupper -- Checks if the letter is upper case
 * @x: The number to be checked
 * Return: 1 for upper letter or  0 for any els
 */

int _isupper(int x)
{
	
	if (x >= 65 && x <= 90)
	{
	return (1);
	}
	return (0);
}
