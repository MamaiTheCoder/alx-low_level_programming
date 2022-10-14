#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by "\n"
 *
 * @separator: string printed between numbers
 * @n: number of integers passed to function
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL)
	{
		va_list ap;
		unsigned int i;

		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
			if (separator && i < n - 1)
				printf("%s", separator);
		}
		printf("\n");
		va_end(ap);
	}
}
