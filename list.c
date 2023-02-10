#include <stdio.h>
#include "include/list.h"


//插入链表
void insert_list_item(List_head list_head, Plist_item plist_item)
{
    Plist_item item = (Plist_item)malloc(sizeof(Plist_item));
    item = plist_item;

    if(list_head== NULL)
    {
        list_head = &item;
        item->next = NULL;    
    }
    else
    {
        Plist_item temp = (*list_head);
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = item;   
    }
}