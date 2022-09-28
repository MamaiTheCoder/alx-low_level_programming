#include "main.h"

/**
 * _strlen_recursion - returns the string length
 *
 * @s:the string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * compare_str - compares the characters in the string
 *
 * @s: length of the string
 * @f: first index of the string f = 0
 * @l: last index of the string l = s - 1
 *
 * Return: 0
 */
int compare_str(char *s, int f, int l)
{
	if (f == l)
		return (1);
	if (f > l)
		return (1);
	if (s[f] != s[l])
		return (0);
	if (*(s + f) == *(s + l))
		return (compare_str(s, f + 1, l - 1));
	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: the string
 *
 * Return: 1 if it is a palindrome , 0 otherwise
 */
int is_palindrome(char *s)
{
	int m;

	m = _strlen_recursion(s) - 1;
	if (*s == '\0')
		return (1);
	return (compare_str(s, 0, m));
}
