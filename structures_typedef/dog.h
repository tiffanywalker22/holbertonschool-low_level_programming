#ifndef _dog_h_
#define _dog_h_


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * struct dog - structure for dogs
 * @name: name of dogs
 * @age: age of the dog
 * @owner: name of the owner
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
#endif
