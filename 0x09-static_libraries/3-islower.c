#include "main.h"

/**
 * _islower - Check the code
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	char x;
	int lower = 0;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == c)
			lower = 1;
	}

	return (lower);
}
