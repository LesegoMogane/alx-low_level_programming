#include "main.h"
/*8
 * _memcpy - a function that copies memeory area
 * @dest: memeory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 *
 * Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; i++)
	{
		dest[r] = src{r};
		n--;
	}
	return (dest);
}