#ifndef UNLIFRIENDS_H
#define UNLIFRIENDS_H

#include <stdio.h>
#include <stdlib.h>

typedef struct nodetag node;
typedef struct studenttag student;

struct nodetag{
    node *prev, *next; //Pointers that points to the previous and the next nodes
    void *data; //Points to the data the the node is refering to. You'll have to typecast the data by using something like *(int*)node->data
};

struct studenttag{
    char *name, *course, *snum;
}

void insert_head();
void insert_tail();
void insert_sort();
void delete();

#endif
