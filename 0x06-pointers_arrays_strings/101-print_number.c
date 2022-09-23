#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int num, d, m, count;

	if (n < 0)
	{
		_putchar('-');
		m = n * -1;
		num = -num;
	}
	else
	{
		m = n;
		d = m;
		count = 1;
	}
		while (d > 9)
		{
			d /= 10;
			count *= 10;
		}
		for (; count >= 1; count /= 10)
		{
			if ((num / 10) > 0)
			print_number(num / 10);
			_putchar((num % 10) + 0);
			_putchar(((m / count) % 10) + 48);
			putchar('\n')
		}

}
