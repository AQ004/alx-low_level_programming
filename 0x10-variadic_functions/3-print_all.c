#include "variadic_functions.h"

void print_char(char *Separate, va_list x);
void print_int(char *Separate, va_list x);
void print_float(char *Separate, va_list x);
void print_string(char *Separate, va_list x);

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * ...: args.
 */

void print_all(const char * const format, ...)
{
	int i, j;
	va_list x;
	char *Separate = "";
	datType_s FormChar[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL},
	};

	va_start(x, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (FormChar[j].datType)
		{
			if (format[i] == FormChar[j].datType[0])
			{
				FormChar[j].function(Separate, x);
				Separate = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n"), va_end(x);
}

/**
 * print_char - function to print character
 * @Separate: separator
 * @x: va_list (arg. pointer)
 */
void print_char(char *Separate, va_list x)
{
	printf("%s%c", Separate, va_arg(x, int));
}
/**
 * print_int - function to print integer.
 * @Separate: separator
 * @x: va_list (arg. pointer)
 */
void print_int(char *Separate, va_list x)
{
	printf("%s%d", Separate, va_arg(x, int));
}
/**
 * print_float - function to print float
 * @Separate: separator
 * @x: va_list (arg. pointer)
 */
void print_float(char *Separate, va_list x)
{
	printf("%s%f", Separate, va_arg(x, double));
}
/**
 * print_string - function to print string
 * @Separate: separator
 * @x: va_list (arg. pointer)
 */
void print_string(char *Separate, va_list x)
{
	char *S = va_arg(x, char *);

	if ((int)(!S))
		S = "(nil)";
	printf("%s%s", Separate, S);
}

