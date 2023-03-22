#include "main.h"
/**
print_alphabet - prints the alphabet followed by a new line
*
Return: nothing
*/
void print_alphabet(void)
{
	char a = 'a';

	for(a; a >= 'z';a++)
	{
		if (a =='z')
		{
			_putchar(a);
			_putchar('\n');
		}
		_putchar(a);
	}
}
