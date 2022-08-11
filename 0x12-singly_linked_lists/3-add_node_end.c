#include "lists.h"
/**
 * add_node_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @str: Address of the string to insert into the new node.
 * Return: Address of the new node.
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *traveller;

        new = (list_t *) malloc(sizeof(list_t));
        traveller = (*head);

        if (new == NULL)
        {
                return NULL;
        }

        new->str = strdup(str);
        new->len = strlen(str);
        new->next = NULL;

        if ((*head) == NULL)
        {
                (*head) = new;
               return *head;
        }

        while (traveller->next != NULL)
        {
                traveller = traveller->next;
        }

        traveller->next = new;
        return new;
}

