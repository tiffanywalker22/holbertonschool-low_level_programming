#ifndef _main_h_
#define _main_h_
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

#endif
