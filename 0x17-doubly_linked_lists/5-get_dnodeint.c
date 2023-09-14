#include "lists.h"

/**
 * get_dnodeint_at_index - return nth node of list
 * @head: ptr to head
 * @index: index of node to search for, from 0
 * Return: nth node, or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
		return (NULL);

	tmp = head;
	while (tmp)
	{
		if (index == size)
			return (tmp);
		size++;
		tmp = tmp->next;
	}
	return (NULL);
}
