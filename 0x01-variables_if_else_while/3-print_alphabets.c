#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Print Alphabets In Lowercase Then Uppercase
 * Return: 0
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
	putchar(al);
	}
	for (al = 'A'; al <= 'Z'; al++)
	{
	putchar(al);
	}
	putchar('\n');
	return (0);
}
