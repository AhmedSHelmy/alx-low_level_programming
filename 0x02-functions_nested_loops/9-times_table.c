#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0.
*
* Return: nothing.
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(_abs(i * j) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
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
