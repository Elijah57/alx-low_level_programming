#include <stdio.h>
/**
 * main - prints the alphabet in lowercase.
 * */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
