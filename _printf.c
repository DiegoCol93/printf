#include "holberton.h"
/**
 *get_f - output format
 *@s: first argument
 *Return: numbers of characters
 */
int (*get_f(char s))(va_list)
{
	arg_t options[] = {
		{'c', printCha},
		{'s', printStr},
		{'d', printNum},
		{'i', printNum},
		{'b', printBin},
		{'R', printR13},
		{'r', printRev},
		{'\0', NULL}
	};

	unsigned int j = 0;

	for (j = 0 ; options[j].letter ; j++)
	{
		if (s == options[j].letter)
			return (options[j].f);
	}
	return (NULL);
}
/**
 * _printf - custom printf
 * @format: specifier
 * Return: bytes printed
 */
int _printf(const char *format, ...)
{
	va_list a_list;
	int i = 0, nbyte = 0;
	int (*fun)(va_list);

	va_start(a_list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0 ; format[i] ; i++)
	{
		if (format[i] ==  '%')
		{
			if (format[i + 1] == '%')
			{
				write(1, &format[i], 1);
				nbyte++;
				i++;
			}
			else
			{
				fun = get_f(format[i + 1]);
				if (fun)
				{
					nbyte += fun(a_list);
					i++;
				}
				else
				{
					write(1, &format[i], 1);
					nbyte++;
				}
			}
		}
		else
		{
			write(1, &format[i], 1);
			nbyte++;
		}
	}
	va_end(a_list);
	return (nbyte);
}
