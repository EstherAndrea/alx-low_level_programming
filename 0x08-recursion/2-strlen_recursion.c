/*
 * File: 2-strlen_recursion.c
 * Auth: smone
 */

#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be used
 *
 
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int sum = o;

	if (*s != '\0')
	{
		 sum++;
		 sum += _strlen_recursion(s + 1);
	}
	return (len);
}
