#include "main.h"
/**
 * _puts_recursion - fills memory
 * @s: data
 *
 * Return: char
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
