#include <stdio.h>
#include "main.h"

/**
 * main - check the code.
 * 
 * _isalpha - checks for alphabetic character
 * @c: the number is checker
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
	){
		return (1);
	}
	else
	{
		return (0);
	}
}
