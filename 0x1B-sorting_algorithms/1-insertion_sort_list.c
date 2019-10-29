#include "sort.h"
/**
 * insertion_sort_list - function that sort a list
 * @list: dp to the list
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *cn = NULL, *cp = NULL, *cu = NULL;

	if (list == NULL || *list == NULL)
		return;
	cu = (*list)->next;
	while (cu)
	{
		if (cu->prev != NULL && cu->n < cu->prev->n)
		{
			cn = cu->next;
			cp = cu->prev;
			cu->prev = cu->prev->prev;
			if (cu->prev != NULL)
				cu->prev->next = cu;
			cu->next = cp;
			cu->next->prev = cu;
			cu->next->next = cn;
			if (cn != NULL)
				cn->prev = cu->next;
			if (cu->prev == NULL)
				*list = cu;
			print_list(*list);
		}
		else if (cu->prev == NULL || cu->n > cu->prev->n)
		{
			cu = cu->next;
		}
	}
}
