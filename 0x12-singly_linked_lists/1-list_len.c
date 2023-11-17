#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @head: pointer to the head of the list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *head)
{
	 int count = 0;

	 while (head != NULL)
	 {
		 count++;
		 h = h->next;
	 }

	 return (count);
}
