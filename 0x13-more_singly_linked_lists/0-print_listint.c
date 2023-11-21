#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all the elements of a listint_t linked list
 * @p: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *p)
{
	size_t count = 0;

	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;

		count++;
	}

	return (count);
}
