#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - Write a function that convert a string to an integer.
 *
 * @dest: pointer
 * @src: pointer
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int n, l1;
    
    l1 = strlen(dest);
    for (n = 0; src[n] != '\0'; n++)
        {
        	dest[l1] = src[n];
            l1++;
        
	}
    dest[l1] = '\0';
    return (dest);
}
