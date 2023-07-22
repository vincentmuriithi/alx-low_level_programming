#include "main.h"
/**
 * _isdigit - checks for digit
 * Returns: 1 if a digit is found and returns 0 if it is not found
 */
int  _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
