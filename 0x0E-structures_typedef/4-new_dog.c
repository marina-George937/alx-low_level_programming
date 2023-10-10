#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: a dog object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n;
	n = dog_t *malloc(sizeof(dog_t));
	if (n != NULL)
	{
		n->name = name;
		n->age = age;
		n->owner = owner;
	}
	return (n);
}
