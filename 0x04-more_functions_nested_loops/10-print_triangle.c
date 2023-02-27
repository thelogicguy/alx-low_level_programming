#include "main.h"
/**
 * print_triangle - Function that prints a triangle, followed by a new line.
 * @size: the int for the paramaters of my function
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int x, y = 0;
	int space;

	if (size > 0)
	{
		while (y < size)
		{
			space = size - y - 1;
			while (x < size)
			{
				if (space > x)
				{
					putchar(' ');
				}
				else
				{
					putchar('#');
				}
				x++;
			}
			y++;
			x = 0;
			putchar ('\n');
		}
	}
	else
		putchar('\n');
}
