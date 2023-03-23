#include "main.h"
/**
* print_to_98 - prints all natural numbers from n to 98, followed by a new line.
* @n: first number
*
* Return: nothing
*/
void print_to_98(int n)
{
	if (n > 98)
	{
		for (n; n > 98; n--)
		{
			printf("%d, ", n);
		}
		printf("%d\n", n);
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		for (n; n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("%d\n", n);
	}
}
