#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: String to reverse
 * Return: no return.
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
