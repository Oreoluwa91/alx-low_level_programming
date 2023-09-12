#include <stdio.h>
#include "main.h"

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
}
