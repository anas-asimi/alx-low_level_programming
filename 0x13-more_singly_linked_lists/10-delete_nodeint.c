#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: head of list
 * @index: index of the node to delete
 *
 * Return: 1 if success, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && count < index)
	{
		prev = temp;
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
		return (-1);

	prev->next = temp->next;

	free(temp);
	return (1);
}

