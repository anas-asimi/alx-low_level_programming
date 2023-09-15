#include <stddef.h>

/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array.
 * @array: array
 * @size: size
 * @action: function to executes
 *
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if ((array == NULL) || (size == 0) || (action == NULL))
		return;

	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
