#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: 'get number'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand();
	int n_digit = n % 10;
	if (n_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n" n, n_digit);
	}
	else if (n_digit == 0)
		printf("Last digit of %d is %d and is 0\n" n, n_digit);
	{
	else
	{
		printf("Last digit of %d is %d and is greater than 5\n" n, n_digit);
	}
	return (0);
}
