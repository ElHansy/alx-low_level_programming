#ifndef DOG_H
#define DOG_H

/**
 * struct dog - to define dog info
 * @name: name
 * @age: age
 * @owner: owner
 * Description: dog info
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
