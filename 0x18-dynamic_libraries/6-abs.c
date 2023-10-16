#include "main.h"
/**
 * _abs - checks for absolute value of an integer
 * @c: the input
 * Return: returns the absolute valueof input
 */
int _abs(int c)
{
	if (c > 0)
	{
		return (c);
	}
	else if (c < 0)
	{
		return (c * (-1));
	}
	else
		return (0);
}
