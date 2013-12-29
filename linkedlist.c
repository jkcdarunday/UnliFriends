#include "unlifriends.h"
/*
 * Doubly Linked List with 2 Dummy Nodes
*/


node* new_node(){
    node *tmp = malloc(sizeof(node));
    tmp->data=NULL;
    return tmp;
}

list* new_list(){
    list *tmp = malloc(sizeof(list));
    tmp->head=new_node();
    tmp->tail=new_node();
    tmp->head->next=tmp->tail;
    tmp->tail->next=tmp->head;
    return tmp;
}

void insert_head(list *l, node *tmp){
    tmp->next = l->head->next;
    tmp->prev = l->head;
    l->head->next->prev = tmp;
    l->head->next = tmp;
}

void insert_tail(list *l, node *tmp){
    tmp->next = l->tail;
    tmp->prev = l->tail->prev;
    l->tail->prev->next = tmp;
    l->tail->prev = tmp;
}

void insert_sort(){
  
} 

void delete(list *l, node *trg){
    if(l->head==trg||l->tail==trg) return;
    trg->prev->next=trg->next;
    trg->next->prev=trg->prev;
    free(trg->data);
    free(trg);
}
