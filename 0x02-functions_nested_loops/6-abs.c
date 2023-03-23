#include "main.h"

/**
 * _abs - function checking the absolute value
 *
 * @a: parameter being checked
 *
 * Return: Always a
 *
 */
int _abs(int a)
{
	if (a < 0)
	{
		a = -(a);
	}
	else if  (a >= 0)
	{
		a = a;
	}
	return (a);
}
