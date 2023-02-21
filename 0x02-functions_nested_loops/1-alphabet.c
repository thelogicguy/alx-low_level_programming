/*
 * File: 1-alphabet.c
 */

#include "main.h"

/**
 * main - Entry point
 *
 * Description: Print alphabets in lower case followed
 * 		by a new line.
 *
 * Return: Always 0 (Success).
 *
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');
}
