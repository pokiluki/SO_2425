#include "list.h"

void list_remove_last(list *l) {
	node* p = l->first;
	while (p->next != NULL)
		p = p->next;
	l->size--;
	free(p);
}
