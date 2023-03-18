#include <stdio.h>
/**
* main - Entry point
*
*Description: Print numbers.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	for (n = 0 ; n <= 57 ; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
