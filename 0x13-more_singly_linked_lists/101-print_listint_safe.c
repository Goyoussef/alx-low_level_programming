#include "lists.h"

/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nm= 0;
	const listint_t *aux_node = head;

	if (!head)
		exit(98);

	while (aux_node)
	{
		printf("[%p] %i\n", (void *)aux_node, aux_node->n);
		aux_node = aux_node->next;
		nm++;
	}
	return (nm);
}
