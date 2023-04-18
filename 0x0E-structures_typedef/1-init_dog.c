#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes variable struct dog
 *
 * @d: pointer to struct dog
 * @name:name of the dog
 * @age:age of the dog
 * @owner: owner of the dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));/*replaces null with data obtained*/
	d->name = name;
	d->age = age;
	d->owner = owner;
}
