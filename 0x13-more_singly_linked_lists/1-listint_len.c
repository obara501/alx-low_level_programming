#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @p: pointer to the head of the list
 *
 * Return: number of elements in the list
 */

size_t listint_len(const listint_t *p)
{
	size_t len = 0;

	while (p != NULL)
	{
		len++;
		p = p->next;
	}

	return (len);
}
