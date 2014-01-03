#include "unlifriends.h"

student *s_new(const char *name, const char *course, const char *snum){
    student *s=malloc(sizeof(student));
    strcpy(s->name=malloc(strlen(name)+1), name);
    strcpy(s->course=malloc(strlen(course)+1), course);
    strcpy(s->snum=malloc(strlen(snum)+1), snum);
    return s;
}

int s_check(list *l, student *s){
    if(l->head->next==l->tail && l->tail->prev==l->head){ // list is empty
        return 0;
    }else{
        node *p;
        for(p = l->head->next;p!=l->tail;p=p->next){ // traverse through the linked list
            if(strcmp(((student*)p->data)->snum,s->snum)==0) // checking for same data
                return 1; // student is already in the list
        }
        return 0;
    }
    return 0;
}

int s_add(list *l, student *s){
    node *tmp=new_node();
    int ret;
    tmp->data=s;
    
    if((ret=s_check(l, s))==0){
        insert_tail(l,tmp);
    }
    
    return ret; // student is added successfully
}

void s_edit(student *s, const char *name, const char *course, const char *snum){
    strcpy(s->data->name, name);
    strcpy(s->data->snum, snum);
    strcpy(s->data->course, course);
}
