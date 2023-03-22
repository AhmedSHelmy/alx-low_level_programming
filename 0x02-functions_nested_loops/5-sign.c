#include "main.h"
/**
* print_sign - print the sign of an int
* @c: int to check
*
* Return: 1 if the int is positive, 0 if equals 0 and -1 if the int is negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	} else if ( n == 0)
	{
		return (0);
		_putchar('0');
	} else 
	{
		return (-1);
		_putchar('-');
	}
}
