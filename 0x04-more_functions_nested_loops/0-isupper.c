#include "main.h"

/***
 * _isupper - Check if the letter is upper
 * @c: The number to be checked
 * Return:  1 for upper letter or 0 for anything else
 */

int _isupper(int x)

{
	if (x >= 65 && x <= 98)
	{
	return (1);
	}
	return (0);
}
