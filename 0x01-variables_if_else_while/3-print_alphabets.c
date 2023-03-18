#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Description :Pint alphapet lowercase and uppercase.
*
*Description: Print alphapet lowercase.
* Return: Always 0 (Success)
*/
int main(void)
{
	int num = 97;
	int num2 = 65;

	while (num <= 122)
	{
		putchar(num);
		num++;
	}
	while (num2 <= 90)
	{
		putchar(num2);
		num2++;
	}
	putchar('\n');
	return (0);
}
