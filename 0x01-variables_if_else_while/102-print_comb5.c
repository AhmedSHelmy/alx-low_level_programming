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
	int n = 1;

	for (i = 0; i < 10;  i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			for (k = 0 ; k < 10; k++)
			{
				for (l = n; l < 10; l++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					if (i < 9 && j < 9)
					{
					putchar(',');
					putchar(' ');
					}
					n = 0;
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
