#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *y)
{
	size_t t = 0;

	while (y)
	{
		if (!y->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", y->len, y->str);
		y = y->next;
		t++;
	}
	return (t);
}
