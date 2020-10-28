#include "holberton.h"
/**
 * printr13 - Encodes string into rot13
 * @s: Target String.
 *
 * Return: Encoded string.
 */
int printr13(va_list s)
{
	int i, j, len = 0;
	char chs[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char rot13[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
	char *str, *str2;

	str = va_arg(s, char *);
	for (i = 0; str[i] != '\0'; i++)
		len++;
	str2 = malloc(sizeof(char) * len + 1);
	if (!str2)
		return ('\0');
	for (i = 0; i <= len; i++)
		str2[i] = str[i];
	for (i = 0; str2[i] != '\0'; i++)
	{
		for (j = 0; chs[j] != '\0'; j++)
		{
			if (str[i] == chs[j])
			{
				str2[i] = rot13[j];
				break;
			}
		}
	}
	for (i = 0; str2[i]; i++)
		write(1, &str2[i], 1);
	free(str2);
	return (len);
}
