#include "main.h"

void print_number(int x);
/**
* print_times_table - prints the n times table, starting with 0.
* @n: number to print its times table
*
* Return: nothing.
*/
void print_times_table(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int x = i * j;

			if (j == 0)
			{
				_putchar(x + '0');
				_putchar(',');
			}
			else if (j > 0 && j < n)
			{
				print_number(x);
				_putchar(',');
			}
			else
			{
				print_number(x);
			}
		}
		_putchar('\n');
	}
}

/**
* print_number - print
* @x: number to print
*
* Return: nothing
*/
void print_number(int x)
{
	if (x >= 10)
	{
		_putchar(' ');
		_putchar(x / 10 + '0');
		_putchar(x % 10 + '0');
	}
	else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(x + '0');
	}
}

