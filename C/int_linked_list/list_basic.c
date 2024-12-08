#include <stdio.h>
#include <stdlib.h>

#include "list.h"
struct list *list_prepend(struct list *list, int value)
{
    struct list *a = NULL;
    a = malloc(sizeof(struct list));
    a->next = list;
    a->data = value;
    return a;
}

size_t list_length(struct list *list)
{
    int longueur = 0;
    while (list != NULL)
    {
        longueur++;
        list = list->next;
    }
    return longueur;
}

void list_print(struct list *list)
{
    while (list != NULL)
    {
        printf("%d", list->data);
        list = list->next;
        if (list != NULL)
        {
            printf(" ");
        }
        else
            printf("\n");
    }
}

void list_destroy(struct list *list)
{
    struct list *a;
    while (list != NULL)
    {
        a = list->next;
        free(list);
        list = a;
    }
}
