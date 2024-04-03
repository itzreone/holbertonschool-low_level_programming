#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @r: the number is checker
 *
 * Return: Always 0 (Success)
 */
int _abs(int r)
{
	if (r < 0)
	{
		return (-r);
	}
	else
	{
		return (r);
	}
}
