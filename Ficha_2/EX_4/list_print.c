#include "list.h"

void list_print(list* l) {

	node* p = l->first;
	while(p->next != NULL){
		printf("%d",p->val);
		p = p->next;
	}
	printf("%d",p->val);
	free(p);
}
