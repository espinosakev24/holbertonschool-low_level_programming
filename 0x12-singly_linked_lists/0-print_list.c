#include <stdio.h>
#include "lists.h"
/**
 *
 *
 *
 */
size_t print_list(const list_t *h)
{
	char * str;
	int n = 0;
	str = h->str;
	if (h == NULL)
	{
		return (0);
	}
	else
	{
		while (h != NULL)
		{
			if (h->str == NULL)
			{
				printf("[0] (nil)\n");
			}

			else
			{
				printf("[%d] %s\n", h->len, h->str);
			}
			n++;
			h = h->next;
		}
		return(n);
	}
}
