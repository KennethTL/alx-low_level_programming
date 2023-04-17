#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog - creates a new dog
 * *@name: name of the dog
 * @age: age of the dog
 * *@owner: name of the dog's owner
 *
 * Return: new struct of type dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_friend;

	new_friend = malloc(sizeof(dog_t));
	if (new_friend)
	{
		new_friend->name = name;
		new_friend->age = age;
		new_friend->owner = owner;
	}

	return (new_friend);

}
