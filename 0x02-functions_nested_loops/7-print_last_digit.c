#include "main.h"
/**
* print_last_digit - prints the last digit in a number
* @n: the number to compute
*
* Return: returns the last digit of an integer.
*/
int print_last_digit(int n)
{
	_putchar(n % 10);
	return (n % 10);
}
