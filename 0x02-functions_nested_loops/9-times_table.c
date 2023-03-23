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
			int x = i * j;

			if (j == 0)
			{
				_putchar(x + '0');
				_putchar(',');
			}
			else if (j == 9)
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
			else
			{
				if (x >= 10)
				{
					_putchar(' ');	
					_putchar(x / 10 + '0');
					_putchar(x % 10 + '0');
					_putchar(',');
				}
				else 
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(x + '0');
                	       		_putchar(',');	
				}
		}
		_putchar('\n');
	}
}
