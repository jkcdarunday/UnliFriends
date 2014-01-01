#ifndef UNLIFRIENDS_H
#define UNLIFRIENDS_H

#include <stdio.h>
#include <stdlib.h>
// STRUCTURES
typedef struct nodetag node;
typedef struct studenttag student;
typedef struct listtag list;

struct nodetag{
    node *prev, *next; //Pointers that points to the previous and the next nodes
    void *data; //Points to the data the the node is refering to. You'll have to typecast the data by using something like *(int*)node->data
};

struct listtag{
    node *head, *tail;
};

struct studenttag{
    char *name, *course, *snum;
};

// linked list functions
node *new_node();
list *new_list();
void insert_head(list *, node *);
void insert_tail(list *, node *);
void delete(list *, node *);

// student functions
student *s_new(const char *, const char *, const char *);
int s_add(list *l, student *s);
#endif
