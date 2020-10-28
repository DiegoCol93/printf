#include "holberton.h"
/**
 * printnum - Prints a number.
 *
 * @n: Input number.
 *
 * Return: Number of bytes printed.
 */
int printNum(va_list n)
{
	unsigned int i, abs, abs1, digit, digit1, div = 1, num, last;
	int number, len = 0;
	char p;

	number = va_arg(n, int);
	if (number < 0)
	{
		write(1, "-", 1);
		abs = -1 * number;
		abs1 = -1 * number;
		len++;
	}
	else
	{
		abs = number;
		abs1 = number;
	}
	for (digit1 = 1;  abs1 / 10 > 0; digit1++)
		abs1 = abs1 / 10;
	for (i = digit1 - 1; i > 0; i--)
		div = div * 10;
	for (digit = digit1; digit >= 1; digit--)
	{
		num = abs / div;
		if (num >= 10)
		{
			last = num % 10;
			p = last + '0';
			write(1, &p, 1);
			len++;
		}
		else
		{
			p = num + '0';
			write(1, &p, 1);
			len++;
		}
		div = div / 10;
	}
	return (len);
}
