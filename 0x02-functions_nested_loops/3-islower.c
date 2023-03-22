#include "main.h"
/**
* _islower - checks if the char is in lowercase
* @c: character to check
*
* Return: 1 if the char is in lower case if else returns 0
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
