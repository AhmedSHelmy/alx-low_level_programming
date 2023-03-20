#include <stdio.h>

/**
* main - Entry Point
*
* Return: returns nothing
*/
int main(void)
{
	char l = '0';
	char u = 'a';

	while (l <= '9')
	{
		putchar(l);
		l++;
	}
	while (u <= 'f')
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
