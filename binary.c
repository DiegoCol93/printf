#include "holberton.h"
/**
 * printbin - Prints a number in a binary form.
 *
 * @b: Input number.
 *
 * Return: Number of bytes.
 */
int printBin(va_list b)
{
	int i, nbyte = 0;
	unsigned int buff[1024], n;
	char ch;

	n = va_arg(b, int);
	if (n < 1)
	{
		write(1, "0", 1);
		return (1);
	}
	for (i = 0; n > 0; i++)
	{
		buff[nbyte] = (n % 2);
		n = n / 2;
		nbyte++;
	}
	for (i = nbyte - 1; i >= 0; i--)
	{
		ch = buff[i] + '0';
		write(1, &ch, 1);
	}
	return (nbyte);
}
