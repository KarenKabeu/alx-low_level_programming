#include "main.h"
#include <stdio.h>
/*
 * _puts_recursion - A fuction that prints a string, followed by a new line
 * @s: string
 * Return: Prints a string
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
	putchar('\n');
	return;
}
	else
{
	putchar(*s);
	_puts_recursion(s + 1);
}
int main(void)
{
char s[] = "Puts with recursion";
_puts_recursion(s);
return (0);
}
}
