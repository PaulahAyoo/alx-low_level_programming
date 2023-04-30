#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list, even if it has a loop
 * @head: pointer to the head of the linked list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 0;

	if (head == NULL)
	{
		fprintf(stderr, "Error: invalid argument - head is NULL\n");
		exit(98);
	}

	slow = head;
	fast = head;

	while (slow && fast && fast->next)
	{
	slow = slow->next;
	fast = fast->next->next;

	/* check if there is a loop */
	if (slow == fast)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		break;
	}

	printf("[%p] %d\n", (void *)slow, slow->n);
	count++;
	}

	/* loop detected, print the rest of the list */
	if (slow == fast)
	{
	fast = head;
	while (slow != fast)
	{
		printf("[%p] %d\n", (void *)fast, fast->n);
		count++;
		fast = fast->next;
		slow = slow->next;
	}
	printf("[%p] %d\n", (void *)fast, fast->n);
	count++;
	}
	else /* no loop, print the rest of the list */
	{
	while (slow)
		{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
		}
	}

	return (count);
}
