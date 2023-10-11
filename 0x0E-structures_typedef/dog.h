#define DOG_H
#ifndef DOG_H

/**
 * MAIN - struct dog - dog's info
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * main2 - dog_t - type
 */

typedef struct dog dog_t;

char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
