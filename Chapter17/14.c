void delete_from_list(struct node **list, int n)
{
    struct node *prev;

    for (prev = NULL;
            *list != NULL && *list->value != n;
            )
        ;

    if (cur == NULL)
        return list;
    if (prev == NULL)
        list = list->next;
    else
        prev->next = cur->next;
    free(cur);
}
