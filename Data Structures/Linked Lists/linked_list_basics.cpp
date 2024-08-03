#include<stdio.h>
#include<cstdlib>
void insert_node();
void delete_node();
void free_all_nodes();
void display();

struct node
{
    int data;
    struct node *link;
};

struct node *first = NULL;
int main()
{
    int choice;
    while (1)
    {
        printf("\nEnter option\n");
        printf("1. Insert   2. Delete   3. Display   4. Quit\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                insert_node();
                break;
            case 2:
                delete_node();
                break;
            case 3:
                display();
                break;
            case 4:
                free_all_nodes();
                return 0;
            default:
                printf("Invalid Input!!!\n");
        }
    }
}

void insert_node()
{
    struct node *new_node, *current;
    int data, position;
    printf("\nEnter value at position to insert: ");
    scanf("%d %d", &data, &position);

    new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    if ((position == 1) || (first == NULL))
    {
        new_node->data = data;
        new_node -> link = first;
        first = new_node;
    }
    else
    {
        int i = 0;
        current = first;
        while ((i < position-2) && (current -> link != NULL))
        {
            current = current -> link;
            i++;
        }
        new_node -> link = current -> link;
        current -> link = new_node;
        new_node -> data = data;
    }
}

void delete_node()
{
    struct node *deletable, *previous;
    int position;
    printf("\nEnter the position from which value is to be removed: ");
    scanf("%d", &position);

    if (position == 1 && first != NULL)
    {
        deletable = first;
        first = first->link;
        printf("Deleted value: %d\n", deletable->data);
        free(deletable);
    }
    else
    {
        int i=0;
        previous = first;
        while ((i < position-2) && (previous -> link != NULL))
        {
            previous = previous -> link;
            i++;
        }
        if (previous -> link != NULL)
        {
            // Making sure there's a node to delete to the right of 'previous'
            deletable = previous -> link;
            previous -> link = (previous -> link) -> link;
            printf("Deleted value: %d\n", deletable -> data);
            free(deletable);
        }
    }
}

void free_all_nodes()
{
    struct node *current, *next;
    current = first;
    while (current != NULL)
    {
        next = current -> link;
        free(current);
        current = next;
    }
    first = NULL; // Set first to NULL after freeing all nodes
}

void display()
{
    struct node *current = first;
    if (current == NULL) {
        printf("Liked List is empty\n");
        return;
    }
    while (current != NULL)
    {
        printf("%d\t", current -> data);
        current = current -> link;
    }
    printf("\n");
}





