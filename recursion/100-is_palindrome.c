#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: input string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _check_palindrome - checks recursively if a string is palindrome
 * @s: input string
 * @start: starting index
 * @end: ending index
 * Return: 1 if palindrome, 0 if not
 */
int _check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (_check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: input string
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);

	if (len <= 1)
		return (1);

	return (_check_palindrome(s, 0, len - 1));
}
