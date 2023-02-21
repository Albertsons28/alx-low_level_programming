#include<stdio.h>
#include "_putchar.h"
/**
 * main - prints the string "_putchar" from a character array.
 *
 * Return: 0
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
	return (0);
}
