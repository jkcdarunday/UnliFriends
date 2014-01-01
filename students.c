#include "unlifriends.h"

student *s_new(const char *name, const char *course, const char *snum){
    student *s=malloc(sizeof(student));
    strcmp(s->name, name);
    strcmp(s->course, course);
    strcmp(s->snum, snum);
    return s;
}

int s_add(list *l, student *s){
    node *tmp=new_node();
    tmp->data=s;
    if(l->head->next==l->tail&&l->tail->prev==l->head){ // list is empty
	insert_head(l, tmp);
    }else{
	node *p = l->head->next;
	for(;p!=l->tail;p=p->next){ // traverse through the linked list
	    if(p->data==s) // checking for same data
		return 1; // student is already in the list
	}
	insert_tail(l, tmp); // student not in the list, append in the list
    }
    return 0; // student is added successfully
}
