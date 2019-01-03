struct node {
    int value;
    struct node *next;
};

struct node *find_last(struct node *list, int n)
{
    struct node *last = list;

    while (list != NULL) {
        if (list->value == n)
            last = list;
        list = list->next;
    }

    return last->value == n ? last : NULL;
}
