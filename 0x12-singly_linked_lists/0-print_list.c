#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @head - pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		if (head->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", head->len, head->str);

		head = head->next;

		count++;
	}

	return (count);
}
