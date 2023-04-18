#include <stdio.h>
#include "dog.h"

/**
 * init_dog - main function of the program
 * @d: size of dog model
 * @name: size of the dog name
 * @age: the age of the dog
 * @owner: size of the owner name
 * Return: null
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
