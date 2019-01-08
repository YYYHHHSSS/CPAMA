#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

void delete_from_list(struct node **list, int n)
{
    struct node *entry = *list;

    while (entry) {
        if (entry->value == n) {
            *list = entry->next;
            free(entry);
        }
        list = &entry->next;
        entry = entry->next;
    }
}

void make_node(struct node **list, int n)
{
    struct node *first;

    first = malloc(sizeof(struct node));

    if (first == NULL) {
        printf("Error: malloc failed in make_node\n");
        exit(EXIT_FAILURE);
    }
    first->value = n;
    if (list != NULL) first->next = *list;
    *list = first;
}

int main(void)
{
    struct node *first = NULL, *p;
    int i;

    for (i = 0; i < 6; i++) {
        make_node(&first, i);
        printf("Node %d : %p\n", i, first);
    }
    printf("Enter the code of node :");
    scanf("%d", &i);
    delete_from_list(&first, i);
    p = first;
    while (p) {
        printf("Node %d : %p\n", p->value, p);
        p = p->next;
    }

    return 0;
}
        
        


    

