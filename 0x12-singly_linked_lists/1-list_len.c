#include <stdlib.h>
#include "lists.h"


size_t list_len(const list_t *w)
{
	size_t s = 0;

	while (w)
	{
		s++;
		w = w->next;
	}
	return (s);
}
