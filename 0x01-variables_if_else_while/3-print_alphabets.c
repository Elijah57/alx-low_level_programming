#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, then in uppercase
 */
int main(void)
{
	char low = 'a';
	char upp = 'A';

	while (low <= 'z')
	{
		putchar(low);
		low++;
	}
	while (upp <= 'Z')
	{
		putchar(upp);
		upp++;
	}
	putchar('\n');
	return (0);

}
