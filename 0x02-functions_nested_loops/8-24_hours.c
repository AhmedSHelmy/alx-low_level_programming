#include "main.h"
/**
* jack_bauer - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
*
* Return: nothing.
*/
void jack_bauer(void)
{
	int i = 0;
	int j = 0;
	
	for (i; i < 24; i++)
	{
		for (j; j < 60; j++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
	}
}