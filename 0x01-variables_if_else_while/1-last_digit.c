#include <stdio.h>
#include <stdlb.h>
#include <tme.h>

/**
 * main - prints the last digits of a random generated number and wether it is greater than 5, less then 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand()-RAND_MAX/2;

	if((n % 10)>5)
	{
		printf("Last digit of %d is %d and is greater than 5\n". n,n % 10)
	}
	else if ((n % 10) < 6 && (n % 10)1=0)
	{
		printf("Last digits of %d is %d and less than 6 and not 0\n".n,n%10)
	}return (0);
}
