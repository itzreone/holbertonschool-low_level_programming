#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - check the code
 * @a: pointer
 *
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	for (int i = 0; i < 8; i++) {
        	for (int p = 0; p < 8; p++) {
            	_putchar(a[i][p]);
        	}
        	_putchar('\n'); // Add a newline after each row
    	}
}
