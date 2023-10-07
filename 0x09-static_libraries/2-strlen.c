#include "main.h"
/**
 * main - _strlen - returns the length of a str
 *
 */
int _strlen(char *s)
{
	int longi = 0;


	while (*s != '\0')
	{
		longi++;
		s++;
	}


	return (longi);
}

