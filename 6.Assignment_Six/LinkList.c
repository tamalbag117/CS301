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
        printf("Enter last node element = ");
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
int main()
{
    int ch, y;
    do
    {
        printf("\nPress 1 for insert at beginning\nPress 2 for insert at end\nPress 3 for display\nEnter your choice = ");
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
        default:
            printf("\nwrong choice ");
        }
        printf("\nDo you want to continue ? if Yes then press 1 \n");
        scanf("%d", &y);
    } while (y == 1);
}
