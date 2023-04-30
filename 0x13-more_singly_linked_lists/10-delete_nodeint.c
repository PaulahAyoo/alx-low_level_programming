#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a linked list
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node to delete.
 *
 * Return: 1 on success, -1 on failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev_node;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}

	prev_node = *head;
	for (i = 0; prev_node != NULL && i < index - 1; i++)
		prev_node = prev_node->next;

	if (prev_node == NULL || prev_node->next == NULL)
		return (-1);

	current = prev_node->next;
	prev_node->next = current->next;
	free(current);

	return (1);
}
