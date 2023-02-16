#include<unistd.h>
/**
 * main -print the line of code without using man(3) printf and man(3)puts
 *
 * Return: 1
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
