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
int printcha(va_list);
int printstr(va_list);
int printnum(va_list);
int printbin(va_list);
int printr13(va_list);
int printrev(va_list);

#endif /* _HOLBERTON_H_ */
