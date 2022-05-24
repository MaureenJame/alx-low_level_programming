#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - function that prints all the elements of a list_t list
@@ -17,9 +17,24 @@ list_t *add_node(list_t **head, const char *str)
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->len = strlen(str);
	new_node->len = _strlen(str);
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

/**
 * _strlen - returns length of string
 * @s: character of string
 * Return: length of string
 */

int _strlen(const char *s)
{
	int i;

	while (s[i] != 0)
		i++;
	return (i);
}
