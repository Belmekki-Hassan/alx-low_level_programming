#include "lists.h"
/**
 * print_listint - function that count the elements of a list
 * @h: pointer to the node head
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
const listint_t *head = h;
size_t count = 0;
while (head)
{
printf("%d\n", head->n);
count++;
head = head->next;
}
return (count);
}
