#include "main.h"

/**
 *_islower - checks for a lowercase character
 *@c: letter being tested
 * Return: Always 0
 */
void _islower(char c)
{
	if (c >= 97 && c <= 122)
	{
		putchar(49);
	}
	else 
	{
		putchar(48);
	}
	
}

