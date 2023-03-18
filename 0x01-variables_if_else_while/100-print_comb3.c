#include <stdio.h>
/**
* main - Entry point
*
*Description: Print numbers of  base 10.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	int z;

	for (i = 0 ; i < 10 ; i++)
	{
		for (z = 1 ; z < 10 ; z++)
		{
			if (i < z && i != z)
			{
				putchar(i + '0');
				putchar(z + '0');
				if (i + z != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
