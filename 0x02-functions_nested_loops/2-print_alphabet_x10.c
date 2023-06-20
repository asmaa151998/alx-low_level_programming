#include <main.h>
/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char xx;
	int y;

	y = 0;

	while (y < 10)
	{
		xx = 'a';
		while (xx <= 'z')
		{
			-putchar(xx);
			xx++;
		}
		_putchar('\n');
		y++;
	}
}
