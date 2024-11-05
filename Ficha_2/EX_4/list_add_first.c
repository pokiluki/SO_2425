#include "list.h"

void list_add_first(int val, list *l) {
	l->first->val = val;
	l->size++;
}
