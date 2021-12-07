#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL, *p;
void insert_at_beginning()
{
    int n;
    struct node *p = (struct node *)(malloc)(sizeof(struct node));
    if (p == NULL)
        printf("Empty");
    else
    {
        printf("Enter the data = ");
        scanf("%d", &n);
        p->data = n;
        p->next = NULL;
        if (start == NULL)
            start = p;
        else
        {
            p->next = start;
            start = p;
        }
    }
}
void insert_at_last()
{
    int n;
    struct node *p = (struct node *)(malloc)(sizeof(struct node));
    struct node *q = (struct node *)(malloc)(sizeof(struct node));
    if (p == NULL)
        printf("Empty");
    else
    {
        printf("Enter last node data = ");
        scanf("%d", &n);
        p->data = n;
        p->next = NULL;
        if (start == NULL)
            start = p;
        else
        {
            q = start;
            while (q->next != NULL)
            {
                q = q->next;
            }
            q->next = p;
        }
    }
}

void insert_at_index()
{
    struct node *temp, *indexnode;
    int index, n, i = 1;
    indexnode = malloc(sizeof(struct node));
    printf("\nEnter your index position :");
    scanf("%d", &index);
    printf("\nEnter the data ");
    scanf("\n%d", &n);
    temp = start;
    indexnode->data = n;
    indexnode->next = NULL;
    while (i < index - 1)
    {
        temp = temp->next;
        i++;
    }
    indexnode->next = temp->next;
    temp->next = indexnode;
}
void delete_at_end()
{
    struct node *temp, *prevnode;
    if (start == NULL)
        printf("Underflow condition");
    else
    {
        if (start->next == NULL)
        {
            printf("deleted number is %d", start->data);
            free(start);
            start = NULL;
        }
        else
        {
            temp = start;
            while (temp->next != NULL)
            {
                prevnode = temp;
                temp = temp->next;
            }
            printf("deleted number is %d", temp->data);
            free(temp);
            prevnode->next = NULL;
        }
    }
}
void delete_at_beginning()
{
    struct node *temp;
    if (start == NULL)
    {
        printf("Underflow condition");
    }
    else
    {
        if (start->next == NULL)
        {
            printf("deleted element is %d", start->data);
        }
        else
        {
            temp = start;
            start = start->next;
            printf("deleted element is %d", temp->data);
            free(temp);
        }
    }
}
void delete_at_index()
{
    struct node *x1 = (struct node *)(malloc)(sizeof(struct node));
    struct node *x2 = (struct node *)(malloc)(sizeof(struct node));
    int index, i = 1;
    x1 = start;
    x2 = NULL;
    printf("\nEnter the positon from you want to delete the node = ");
    scanf("\n%d", &index);
    if (start == NULL)
        printf("Underflow condition");
    else if (index == 1)
    {
        delete_at_beginning();
    }
    else
    {

        while (i != index)
        {
            x2 = x1;
            x1 = x1->next;
            i++;
        }
        x2->next = x1->next;
        x1->next = NULL;
        free(x1);
    }
}

void count_display()
{
    int count = 0;
    struct node *q1 = (struct node *)(malloc)(sizeof(struct node));
    if (start == NULL)
        printf("List is empty");
    else
    {
        q1 = start;
        while (q1 != NULL)
        {
            count++;
            printf("%d \n", q1->data);
            q1 = q1->next;
        }
        printf("Number of nodes = %d", count);
    }
}
void reverse_linkedlist_display()
{
    struct node *q4, *q5;
    int i, total = 0;
    q4 = start;
    while (q4 != NULL)
    {
        total++;
        q4 = q4->next;
    }
    while (total != 0)
    {
        q5 = start;
        for (i = 1; i <= total - 1; i++)
        {
            q5 = q5->next;
        }
        printf("%d\n", q5->data);
        total--;
    }
}
void reverse_linkedlist_display_using_recursion(struct node *r)
{
    if (r == NULL)
        return;
    reverse_linkedlist_display_using_recursion(r->next);
    printf("%d\n", r->data);
}
void detectloop()
{
    struct node *L1 = (struct node *)(malloc)(sizeof(struct node));
    struct node *L2 = (struct node *)(malloc)(sizeof(struct node));
    L1 = start;
    L2 = start;
    while (L1->next != NULL && L2->next != NULL)
    {
        L1 = (L1->next)->next;
        L2 = L2->next;
    }
    if (L1 == L2)
    {
        printf("Loop has been detected");
    }
}

int main()
{
    int ch, y;
    do
    {
        printf("\nPress 1 for insert at beginning\nPress 2 for insert at end\nPress 3 for display\nPress 4 for index Node insertion\nPress 5 for delete at end\nPress 6 for delete at beginning\nPress 7 for reversed linked list display\nPress 8 for reversed linked list display using recursion\nPress 9 for delete at index\nPress 10 for detecting loop\nEnter your choice = ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert_at_beginning();
            break;
        case 2:
            insert_at_last();
            break;
        case 3:
            count_display();
            break;
        case 4:
            insert_at_index();
            break;
        case 5:
            delete_at_end();
            break;
        case 6:
            delete_at_beginning();
            break;
        case 7:
            reverse_linkedlist_display();
            break;
        case 8:
            reverse_linkedlist_display_using_recursion(start);
            break;
        case 9:
            delete_at_index();
            break;
        case 10:
            detectloop();
            break;
        default:
            printf("\nwrong choice ");
        }
        printf("\nDo you want to continue ? if Yes then press 1 \n");
        scanf("%d", &y);
    } while (y == 1);
}