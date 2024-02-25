#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
        char c;
	int i;
	i = 0;

	while(i < 10)
	{
        	for (c = 'a' ; c <= 'z' ; c++)
        	{
                	_putchar(c);
        	}
        	_putchar('\n');
		i++;
	}
}

~  
