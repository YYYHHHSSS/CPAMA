struct node *insert_into_ordered_list(struct node *list, struct node *new_node)
{
    struct node *cur = list, *prev = NULL;
    while (cur->value <= new_node->value && cur != NULL) {
        prev = cur;
        cur = cur->next;
    }
    if (cur == list) {
        new_node->next = cur;
        list = new_node;
    } else if (cur == NULL)
        prev->next = new_node;
    else {
        prev->next = new_node;
        new_node->next = cur;
    }
                    
    return list;
}
