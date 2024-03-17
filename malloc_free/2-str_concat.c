#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *str_concat(char *s1, char *s2)
{
	char *s;
	int size1 = 0, size2 = 0, i, k = 0, j = 0;
    
	if (s1 != NULL)
		while (s1[k] != '\0')
        {	    
		    size1++;
		    k++;
        }
	if (s2 != NULL)
		while (s2[j] != '\0')
        {	
		    size2++;
		    j++;
        }
	s = malloc(size1 + size2 + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0 ; i < size1 ; i++)
		s[i] = s1[i];
	for (i = 0 ; i < size2 ; i++)
		s[size1 + i] = s2[i];
	s[size1 + size2] = '\0';

	return (s);
}
