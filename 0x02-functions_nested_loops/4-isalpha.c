#include "main.h"
/**
* _isalpha - checks if the char is a letter
* @c: character to check
*
* Return: 1 if the char is in letter if else returns 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' &&  c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
