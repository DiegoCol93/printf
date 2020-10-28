#include "holberton.h"
/**
 * printCha - print a char
 * @c: char to print
 * Return: always 1
 */
int printCha(va_list c)
{
	char ch = va_arg(c, int);

	write(1, &ch, 1);
	return (1);
}
/**
 * printstr - printstring
 * @s: string to print
 * Return: bytes printed
 */
int printStr(va_list s)
{
	int len;
	char *str;

	str = va_arg(s, char *);
	if (!str)
		str = "(null)";
	for (len = 0; str[len] != '\0'; len++)
		write(1, &str[len], 1);
	return (len);
}
