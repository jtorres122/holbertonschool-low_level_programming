#include "dog.h"
int _strlen(char *s);

/**
 * new_dog - function
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int idx;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->age = age;

	dog->name = malloc(sizeof(char) * _strlen(name));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * _strlen(owner));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (idx = 0 ; name[idx] != '\0' ; idx++)
	{
		dog->name[idx] = name[idx];
	}
	dog->name[idx] = '\0';

	for (idx = 0 ; owner[idx] != '\0' ; idx++)
	{
		dog->owner[idx] = owner[idx];
	}
	dog->owner[idx] = '\0';

	return (dog);
}

/**
 * _strlen - function
 * @s: parameter
 * Return: 0
 */
int _strlen(char *s)
{
	int index;

	for (index = 0 ; s[index] != '\0' ; index++)
	;

	return (index);
}
