#include "holberton.h"

/**
 * printrev - function to print in reverse
 * @s: entry string
 *
 * Return: reversed string
 */
int printrev(va_list s)
{
	int i, len;
	char *str, *n = "(null)";

	str = va_arg(s, char *);

	if (str == NULL || str == 0)
	{
		for (i = 0 ; n[i] ; i++, len++)
		{
			write(1, &n[i], 1);
		}
		return (len);
	}
	for (i = 0 ; str[i] ; i++)
	{
	}
	for (i = i - 1 ; i >= 0 ; i--)
	{
		write(1, &str[i], 1);
		len++;
	}
	return (len);
}
