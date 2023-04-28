#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: void
 */
size_t free_list(list_t *head)
{
size_t count = 0;
list_t *temp;
while (head != NULL)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);
count++;
}
return (count);
}
