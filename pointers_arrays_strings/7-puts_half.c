#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* puts2 - prints a string
* @str:pointer
*
* Return: Always 0.
*/
void puts_half(char *str)
{
        int i, l;

        l = strlen(str) / 2;

        for (i = l; str[i] != '\0'; i++)
        {
                putchar(str[i]);
        }
        putchar('\n');
}

