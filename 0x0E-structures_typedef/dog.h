#ifndef _DOG_H
#define _DOG_H

/**
 * dog_t - typed struct dog
 */
typedef struct dog dog_t;
/**
 * struct dog - keeps information of the dog.
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: struct named as "dog" which keeps data about dog's name,
 * its age, and the owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
