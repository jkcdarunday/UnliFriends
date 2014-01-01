#include "unlifriends.h"
// main
int main(void){
    // testing student functions => still segfault
    list *l=new_list();
    student *s1=s_new("Yhel","BSCS","2012-01065");
    s_add(l, s1);
    student *s = (student *)l->head->next->data;
    printf("Name>>%s\nCourse>>%s\nStudent No>>%s\n", s->name, s->course, s->snum);
    return 0;
}
