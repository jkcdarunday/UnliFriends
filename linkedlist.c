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

void insert_head(){
}

void insert_tail(){
}

void insert_sort(){
} 

void delete(){
}
