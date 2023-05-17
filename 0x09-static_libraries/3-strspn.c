#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Alwaya 0 (Success)
 */
unsigned int_strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accepted[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (acceppt[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
