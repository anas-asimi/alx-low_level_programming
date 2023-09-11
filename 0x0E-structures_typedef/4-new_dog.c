#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nameLength = 0, ownerLenght = 0, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	while (name[nameLength])
	{
		nameLength++;
	}
	nameLength++;
	dog->name = malloc(nameLength * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < nameLength; i++)
		dog->name[i] = name[i];

	while (owner[ownerLenght])
	{
		ownerLenght++;
	}
	ownerLenght++;
	dog->owner = malloc(ownerLenght * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ownerLenght; i++)
		dog->owner[i] = owner[i];
	dog->age = age;
	return (dog);
}
