#include "main.h"
/**
* print_last_digit - prints the last digit in a number
* @n: the number to compute
*
* Return: returns the last digit of an integer.
*/
int print_last_digit(int n)
{
	int i = n % 10;

	_putchar(_abs(i) + '0');
	return (_abs(i));
}
/**
 * _abs - computes the absolute value of an integer.
 * @n: the number to compute
 *
 * Return: returns the absolute value of an integer.
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
 	else
 	{
                 return (-n);
	}
}
