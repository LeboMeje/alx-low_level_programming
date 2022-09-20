#include "main.h"
#include <stdio.h>


/**
 * puts2 - prints one char out of 2 of a string.
 * @str: input string.
 * Return: no return.
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)												putchar(*(str + i ));
		i++
	}
	putchar(10);
}
