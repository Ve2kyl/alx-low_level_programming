#include <stdio.h>
#include <unistd.h>

/**
 * main - program entry point (print quote)
 *
 * Description: prints quote followed by a new line
 *
 * Return: 1 on Success
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
