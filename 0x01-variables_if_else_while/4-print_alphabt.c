#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
*Description: Print alphapet expect q and e
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int num = 97;

	while (num <= 122)
	{
		if (num == 101 || num == 113)
		{
			num++;
			continue;
		}
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
