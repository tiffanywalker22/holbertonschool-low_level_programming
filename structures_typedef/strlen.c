#include "dog.h"

/**
 * _strlen - prints length of string
 * @s: the string
 * Return: the length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);

}
