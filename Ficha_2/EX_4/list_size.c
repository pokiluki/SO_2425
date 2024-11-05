#include "list.h"

int list_size(list *l) {
	node* p = l->first;
	int count = 0;
	while(p->next != NULL)
		count++;
	return count;
}
