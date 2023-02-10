#ifndef __list_H__
#define __list_H__


typedef struct list_item{
    int id;
    char name[5];
    struct list_item *next;
} List_item, *Plist_item;

typedef Plist_item *List_head;

#endif