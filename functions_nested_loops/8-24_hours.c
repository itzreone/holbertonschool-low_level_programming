#include "main.h"

/**
 * jack_bauer -  prints every minute of the day of Jack Bauer
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	char n1, n2, n3, n4;

	for (n1 = '0'; n1 <= '2'; n1++)
	{
		if (n1 == '0' || n1 == '1')
			for (n2 = '0'; n2 <=9; n2++)
			{
				for (n3 = '0'; n3 <= '5'; n3++)
				{
					for (n4 = '0'; n4 <= '9'; n4++)
					{
						_putchar(n1);
						_putchar(n2);
						_putchar(':');
						_putchar(n3);
						_putchar(n4);
						_putchar('\n');
					}
				}
			}
		else if (n1 == '2')
			for (n2 = '0'; n2 <=3; n2++);
			{
				for (n3 = '0'; n3 <= '5'; n3++);
				{
					for (n4 = '0'; n4 <= '9'; n4++);
					{
						_putchar(n1);
						_putchar(n2);
						_putchar(':');
						_putchar(n3);
						_putchar(n4);
						_putchar('\n');
					}
				}
			}
	}
}
