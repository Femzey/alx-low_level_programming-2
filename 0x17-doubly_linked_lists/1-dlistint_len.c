#include "lists.h"

/**
 * dlistint_len - returns number of elements in a doubly linked list
 * @h: pointer to head node
 * Return: returns number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (
