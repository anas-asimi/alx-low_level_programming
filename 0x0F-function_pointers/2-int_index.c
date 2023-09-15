/**
 * int_index - a function that searches for an integer.
 * @array: array
 * @size: size
 * @cmp: function to executes
 *
 * Return: void.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int result;

	if (size <= 0)
		return (-1);

	while (i < size)
	{
		result = (*cmp)(array[i]);
		if (result)
			return (i);
		i++;
	}
	return (-1);
}
