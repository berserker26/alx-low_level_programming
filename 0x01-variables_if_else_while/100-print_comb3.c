#include<stdio.h>
/*
*Write a program that prints all possible 
*different combinations of two digits.
*/
int main(void)
{
int i,j;
for (i = 48; i < 58;i++){
	for(j = i + 1; j < 58; j++){
	putchar(i);
	putchar(j);
	putchar(',');
	putchar(' ');
	}
}
	return 0;
}
