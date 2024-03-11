#ifndef DOG
#define DOG
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - Give info about dog
 * @name: dog name
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);


#endif
