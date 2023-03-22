#include "main.h"
/**
* _islower - checks if the char is in lowercase
* @c: character to check
*
*/
int _islower(int c)
{
	if (c >= 'a' &&  c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
