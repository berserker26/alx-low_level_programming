#include<stdio.h>
/**
* main - prints all possible different combinations of two digits.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i, j; 
	for (i = 48; i < 58; i++)
	{
		for(j = i + 1; j < 58; j++)
		{
			putchar(i); 
			putchar(j); 
			putchar(','); 
			putchar(' '); 
		}
	}
	return 0;
}