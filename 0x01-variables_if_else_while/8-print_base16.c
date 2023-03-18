#include <stdio.h>
/**
* main - Entry point
*
*Description: Print numbers of  base 16.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int z;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (z = 97 ; z <= 102; z++)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
