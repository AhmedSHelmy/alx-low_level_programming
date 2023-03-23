#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0.
*
* Return: nothing.
*/
void times_table(void)
{
	int i = 0;
	int j = 0;

	while (i <= 9)
	{
		while (j <= 9)
		{
			_putchar(i * j + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
