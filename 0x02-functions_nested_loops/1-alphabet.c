#include <stdio.h> 

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void) {
    for (char c = 'a'; c <= 'z'; ++c) {
        _putchar(c);
    }
    _putchar('\n');
}

