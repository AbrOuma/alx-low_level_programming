#include <stdio.h>
/**
 * main - main part
 * Return: Always 0
 */
int main(void)
{
	int num1 = 0;
	int num2 = 1;
	int num1max = 98;
	int num2max = 99;

	while (num2 <= num2max)
	{
		num2 = num1 + 1;
		while (num2 <= num2max)
		{
			putchar(num1 < 9 ? 0 + '0' : (num1 / 10) + '0');
			putchar(num1 < 9 ? num1 + '0' : (num1 % 10) * '0');
			putchar(' ');
			putchar(num2 < 9 ? 0 + '0' : (num2 / 10) + '0');
			putchar (num2 < 9 ? num2 + '0' : (num2 % 10) + '0');
			if (num1 != num1max)
			{
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
