#include <unistd.h>

/**
 * _putchar - prints a character
 *
 * @c: the character in ASCII
 *
 * Return: 1 on success.
 * On error, -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
