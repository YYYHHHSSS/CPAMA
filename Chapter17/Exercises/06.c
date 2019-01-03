#include <stdlib.h>

struct node *delete_from_list(struct node *list, int n)
{
    struct node *cur;

    for (cur = list;
            cur != NULL && cur->next->value != n;
            cur = cur->next)
        ;
    if (cur == NULL) {
        if (list->value == n) {
            list = list->next;
        }
        return list;
    }
    cur->next = cur->next-next;
    return list;
}



