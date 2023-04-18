#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);

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
	int index, index1, name_length, owner_length;

	index = 0;
	index1 = 0;
	name_length = 0;
	owner_length = 0;

	new_friend = malloc(sizeof(dog_t));
	if (new_friend == NULL || !(name) || !(owner) || age < 0)
	{
		free(new_friend);
		return (NULL);
	}
	name_length = _strlen(name);
	owner_length = _strlen(owner);
	new_friend->age = age;

	new_friend->name = malloc(name_length + 1);
	new_friend->owner = malloc(owner_length + 1);

	if ((new_friend->name) == NULL || (new_friend->owner) == NULL)
	{
		free(new_friend);
		free(new_friend->name);
		free(new_friend->owner);
		return (NULL);
	}
	while (index < name_length)
	{
		new_friend->name[index] = name[index];
		index++;
	}
	new_friend->name[index] = '\0';

	while (index1 < owner_length)
	{
		new_friend->owner[index1] = owner[index1];
		index1++;
	}
	new_friend->owner[index1] = '\0';

	return (new_friend);
}

/**
 * _strlen - checks the length of a string
 * @s: string to be evaluated
 *
 * Return: length of string *s
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (*s++)
	{
		i++;
	}

	return (i);
}
