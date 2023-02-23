#include "main.h"

/**
 *  _isupper - checks if letter c is upper or not
 *  @c: This is the input to check
 *
 *  Return: 1 if c is uppercase
 *  otherwise it returns 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);

}
