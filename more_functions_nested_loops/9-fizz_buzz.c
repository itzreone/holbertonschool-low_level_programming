#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j, l;
	for (l = 1; l <= 100; l++)
	{
		i = l % 3;
		j = l % 5;	
		if (i == 0 && j == 0)
		{
			printf("FizzBuzz");
		}
		else if(i == 0 && j != 0)
		{
			printf("Fizz");
		}
		else if(i != 0 && j == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d",l);
		}
		if( l != 100)
			_putchar(" ");
	}
    return (0);
}
