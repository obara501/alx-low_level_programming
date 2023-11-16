
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements ina linked list.
 * @head - pointer to the list_t to print
 *
 * Return: the number of nodes printed.
 */
size_t print_list(const list_t *head)
{
	size_t count = 0;

	while (head)
	{
		 if (!head->str)
			 printf("[0] (nil)\n");
		 else
			 printf("[%u] %s\n", head->len, head->str);
		 head = head->next;
		 s++;
	}

	return (s);
}
