#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Program that prints alphabet in lowercase and uppercase'
 * Return: Always 0
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 98)
	{
		putchar(m);
		n++;
	}
	putchar('\n');
	return (0);
}
