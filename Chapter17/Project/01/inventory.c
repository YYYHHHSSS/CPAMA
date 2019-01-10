/* Maintains a parts database (array version) */

#include <stdio.h>
#include "readline.h"

#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
    int number;
    char name[NAME_LEN+1];
    int on_hand;
};

int find_part(int number, int *num_parts, struct part inventory[]);
void insert(int *num_parts, struct part inventory[]);
void search(int *num_parts, struct part inventory[]);
void update(int *num_parts, struct part inventory[]);
void print(int *num_parts, struct part inventory[]);
void make_arrary(struct part **p);

int main(void)
{
    int num_part;
    char code;


    for (;;) {
        printf("Enter operation code: ");
        scanf(" %c", &code);
        while (getchar() != '\n')
            ;
        switch (code) {
            case 'i': insert(&num_parts, inventory);
                      break;
            case 's': search(&num_parts, inventory);
                      break;
            case 'u': update(&num_parts, inventory);
                      break;
            case 'p': print(&num_parts, inventory);
                      break;
            case 'q': return 0;
            default : printf("Illegal code\n");
        }
        printf("\n");
    }
}

int find_part(int number, int *num_parts, struct part inventory[])
{
    int i;
    for (i = 0; i < *num_parts; i++) 
        if (inventory[i].number == number)
            return i;
    return -1;
}

void make_arrary(struct part *p)
{
    if (p[sizeof(*p)-1] != 0x0)  


void insert(int num_parts, struct part inventory[])
{

    if (*num_parts == MAX_PARTS) {
        printf("Database is full; can't add more parts.\n");
        return;
    }

    printf("Enter part number: ");
    scanf("%d", &part_number);

    inventory[*num_parts].number = part_number;
    printf("Enter part name: ");
    read_line(inventory[*num_parts].name, NAME_LEN);
    printf("Enter quantity on hand: ");
    scanf("%d", &inventory[*num_parts].on_hand);
    (*num_parts)++;
}

void search(int *num_parts, struct part inventory[])
{
    int i, number;

    printf("Enter part number: ");
    scanf("%d", &number);
    i = find_part(number, num_parts, inventory);
    if (i >= 0) {
        printf("Part name: %s\n", inventory[i].name);
        printf("Quantity on hand: %d\n", inventory[i].on_hand);
    } else
        printf("Part not found.\n");
}

void update(int *num_parts, struct part inventory[])
{
    int i, number, change;

    printf("Enter part number: ");
    scanf("%d", &number);
    i = find_part(number, num_parts, inventory);
    if (i >= 0) {
        printf("Enter change in quantity on hand: ");
        scanf("%d", &change);
        inventory[i].on_hand += change;
    } else
        printf("Part not found.\n");
}

void print(int *num_parts, struct part inventory[])
{
    int i;

    printf("Part Number   Part Name                    "
            "Quantity on Hand\n");
    for (i = 0; i < *num_parts; i++)
        printf("%7d        %-25s%11d\n", inventory[i].number, inventory[i].name, inventory[i].on_hand);
}
