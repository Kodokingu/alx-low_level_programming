#include "main.h"
#include <stdlib.h>
/**
 *main - *malloc_checked - allocate memory
 *
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(65);

	return (ptr);
}
