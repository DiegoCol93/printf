#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
/**
 * struct arg_s - args structure
 *
 * @letter: Option for the argument.
 * @f: Function to call.
 */
typedef struct arg_s
{
	char letter;
	int (*f)();
} arg_t;
int _printf(const char *format, ...);
int printCha(va_list);
int printStr(va_list);
int printNum(va_list);
int printBin(va_list);
int printR13(va_list);
int printRev(va_list);
#endif /* _HOLBERTON_H_ */
