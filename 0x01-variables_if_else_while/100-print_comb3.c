#include<stdio.h>

/**
* main - prints all possible different combinations of two digits.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = 48, j;
	
	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	}
		putchar('\n');
		return(0);
}