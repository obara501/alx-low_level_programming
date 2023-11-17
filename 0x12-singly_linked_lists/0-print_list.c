#include <stdio.h>
#include "lists.h"

/**
 * print_list - print the elements inside a linked list
 * @head - pointer to the element to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *head)
{
	int count = 0;
	
	while (head)
	{
		 if (!head->str)
			 printf("[0] (nil)\n");
		 else
			 printf("[%d] %s\n", head->len, head->str);

		 head = head->next;

		 s++;
	}

	return (int);
}
