#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0.
*
* Return: nothing.
*/
void times_table(void)
{
	int i;
	int j = 0;

	for (i =0; i <= 9; i++)
	{
		while (j <= 9)
		{
			_putchar(i * j + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			j++;
		}
		_putchar('\n');
	}
}
