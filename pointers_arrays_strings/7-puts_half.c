#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* puts2 - prints a string
* @str:pointer
*
* Return: Always 0.
*/
void puts2(char *str)
{
        int i, l;

        l = strlen(str);

        for (i = 0; str[i] != '\0'; i++)
        {
                while (i - 1 >= l / 2);
                {
                        _putchar(str[i]);
                }
        }
        _putchar('\n');
}
