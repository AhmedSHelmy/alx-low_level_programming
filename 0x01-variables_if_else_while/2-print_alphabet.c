#include <stdio.h>

/**
* main - Entry Point
*
* Return: returns nothing
*/
int main(void)
{
	char c = 'a';
	
	while (c != 'z')
	{
		putchar(c);
		c++;
	}
	putchar('z');
	return (0);
}
