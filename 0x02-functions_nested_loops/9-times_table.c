#include "main.h"

void print_number(int x);
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
		int x = i * j;

		for (j = 0; j < 9; j++)
		{
			if (j == 0)
			{
				_putchar(x + '0');
				_putchar(',');
			}
			else if (j > 0 && j < 9)
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
		_putchar(x & 10 + '0');
	}
	else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(x + '0');
	}
}

