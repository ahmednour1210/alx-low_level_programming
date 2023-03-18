#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
*Description: Print alphapet lowercase.
* Return: Always 0 (Success)
*/
int main(void)
{
	int num = 97;

	while (num <= 122)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
