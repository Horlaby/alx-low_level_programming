#include "main.h"
/**
 *_strncat - function that concatenates two strings. it will use
 * at most n bytes from src. src does not need to be null terminated.
 *@dest: pointer to destination string.
 *@src: pointer to source string.
 *@n: number of bytes to be concatenated.
 *
 *Return: pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, k;
/* j is a counter for  n bytes of src to be concatenated */
/* length = length of destination string */

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	for (k = 0; k < n && src[k] != '\0'; k++, len++)
	{
		dest[len] = src[k];
	}
	dest[len] = '\0';
	return (dest);
}
