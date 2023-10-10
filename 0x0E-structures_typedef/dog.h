#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

/**
 * init_dog - initializes a dog
 * @d: address of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * print_dog - prints dog variables
 * @d: struct of dog
 */
void print_dog(struct dog *d);

#endif
