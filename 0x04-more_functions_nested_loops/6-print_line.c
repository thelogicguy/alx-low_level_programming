#include "main.h"

/**
 * print_line - Write a function that draws a straight line in the terminal.
 * @n: is the integer for the paramaters of my function
 * Return: 0
 */
void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a <= n)
		{
			putchar('_');
			a++;
		}
	 putchar('\n');
	}
	else
	putchar('\n');
}
