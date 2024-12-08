#ifndef LIST_H
#define LIST_H

#include <stddef.h>

struct list
{
    int data;
    struct list *next;
};

struct list *list_prepend(struct list *list, int value);
size_t list_length(struct list *list);
void list_print(struct list *list);
void list_destroy(struct list *list);

#endif /* !LIST_H */
