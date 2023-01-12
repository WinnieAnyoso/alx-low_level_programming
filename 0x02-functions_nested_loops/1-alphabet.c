/*
 * File: 1-alphabet.c
 * Auth: Winnie
 */

#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		_putchar(letter);

	_putchar('\n');
}
