#include <stdio.h>

/**
* main - Entry Point
*
* Return: returns nothing
*/
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i < 10;  i++)
	{
		for (j = i ; j < 10 ; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				for (l = k + 1; l < 10; l++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					putchar(l + '0');
					if (i < 9 && j < 9 )
					{
					putchar(',');
					putchar(' ');
					}
					l = 0;
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
