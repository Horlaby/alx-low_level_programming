#include "main.h"

/**
 *  _isdigit - This checks if c is a digit in 0 through 9
 *  @c: The value to check
 *
 *  Return: Expected to return 1 if digit
 *  otherwise returns 0
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);

}
