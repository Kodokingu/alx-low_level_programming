#include <unistd.h>

/**
 *main - _putcher - writes character
 *
 */
int _putchar(char c) 
{ 
 	return (write(1, &c, 1)); 
} 
