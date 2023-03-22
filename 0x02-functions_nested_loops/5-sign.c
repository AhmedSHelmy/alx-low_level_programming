#include "main.h"
/**
* print_sign - print the sign of an int
* @n: int to check
*
* Return: 1 if the int is positive, 0 if equals 0 and -1 if the int is negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}else if ( n == 0)
	{
		_putchar('0');
		return (0);
	}else
	{
		_putchar('-');
		return (-1);
	}
}
