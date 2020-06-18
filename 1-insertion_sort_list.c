#include "sort.h"

/**
 *insertion_sort_list - inserts node sorted in new list
 *@list: head
 *return: null
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *sorted = NULL;

	listint_t *current = *list;

	while (current != NULL)
	{
		print_list(current);
		listint_t *next = current->next;

		current->prev = current->next = NULL;

		sortedInsert(&sorted, current);

		current = next;

	}

	*list = sorted;
}

/**
 *sortedInsert - inserts node sorted in new list
 *@head: head
 *@newNode: new
 *Return: null
 */
void *sortedInsert(listint_t **head, listint_t *newNode)
{
	listint_t *current;

	if (*head == NULL)
		*head = newNode;
	else if ((*head)->n >= newNode->n)
	{
		newNode->next = *head;
		newNode->next->prev = newNode;
		*head = newNode;
	}
	else
	{
		current = *head;

		while (current->next != NULL && current->next->n < newNode->n)
			current = current->next;

		newNode->next = current->next;

		if (current->next != NULL)
			newNode->next->prev = newNode;

		current->next = newNode;
		newNode->prev = current;
	}
	return (NULL);
}
