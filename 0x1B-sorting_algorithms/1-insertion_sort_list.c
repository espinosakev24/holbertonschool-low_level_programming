	current = head;
	
	while(current)
	{
		if (current->next == NULL)
			return;
		/* Case: Don't having two nodes to go through forward */
		if (current->n > current->next->n && current->next->next == NULL)
		{
			cpr = current->prev;
			current->prev = current->next;
			current->next = NULL
			current->prev->prev = cpr;
			current->prev->prev->next = current->prev;
			current->prev->next = current;
		}
		/* case: Standing in the first node */
		else if (current->n > current->next->n && current->prev == NULL)
		{
			current->prev = current->next;
			current->next->prev = NULL;
			current->next = current->next->next;
			current->next->prev = current;
			current->prev->next = current;
		}
		/* Case: Still having two nodes to go through forward */
		else if (current->n > current->next->n && current->next->next != NULL & current->prev != NULL)
		{
			cpr = current->prev;
			current->prev = current->next;
			current->next = current->next->next;
			current->prev->prev = cpr
			current->prev->prev->next = current->prev;
			current->prev->next = current;
			current->next->prev = current;
		}
	}
