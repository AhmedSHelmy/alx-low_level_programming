#include "main.h"
/**
* print_alphabet - prints the alphabet followed by a new line
*/
void print_alphabet_x1(void)
{
	int i =0;
	while (i != 10 )
	{
		char a = 'a';

		while (a <= 'z')
		{
		_putchar(a);
		a++;
		}
		_putchar('\n');
		i++;
	}
}
