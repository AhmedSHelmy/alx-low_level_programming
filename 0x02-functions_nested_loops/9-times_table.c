#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0.
*
* Return: nothing.
*/
void times_table(void)
{
	int i, j;
	int x = i * j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (x >= 10)
			{
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else 
			{
				_putchar(x + '0');
                	        _putchar(',');
        	                _putchar(' ');
 	                        _putchar(' ');
			}
		}
		_putchar('\n');
	}
}
