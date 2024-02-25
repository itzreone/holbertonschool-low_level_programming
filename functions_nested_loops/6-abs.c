#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the number is checker
 *
 * Return: Always 0 (Success)
 */
int _abs(int r)
{
	int a;
	if (r < 0)
	{
		a = r * -1;
		_putchar(a);
	}
	else
	{
		_putchar(r);
	}
}
